@pll @api
Feature: Spaces
  As a product owner
  I need to know that Spaces are working as intended
  In order for members to collaborate

  Scenario: Spaces
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    Then I should see "Open - accessible to all site users"
    And I press "Publish"
    Then I should see "Space Type field is required."
    Then I should see "Title field is required."
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
      | body[und][0][value] | This description of open Space 1 will appear in the Space search results for authenticated users. |
    And I select "Interest Based Community" from "Space Type"
    And I press "Publish"
    Then the "h1" element should contain "Space 1"
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    And I select the radio button "Private - accessible only to space members"
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
    #  | body[und][0][value] | Testing text body |
    And I select "Project Based Community" from "Space Type"
    And I press "Publish"
    Then I should see "The Title field requires a unique value"
    And I fill in "Space 2" for "Title"
    And I press "Publish"
    Then the "h1" element should contain "Space 2"
    And I should see "Private"
    Then I visit "/user/logout"
    Given I am logged in as a user with the "authenticated user" role
    When I go to "/space/space-2"
    Then the response status code should be 403
    Then I should see "Access Denied"
    And I visit "/spaces"
    Then I should see "All Spaces"
    Then I should not see the link "Space 2"
    Then I should see "This description of open Space 1 will appear in the Space search results for authenticated users."
    And I click "Space 1"
    Then the "h1" element should contain "Space 1"
    And I should not see "This description of open Space 1 will appear in the Space search results for authenticated users."
    Then I should see "created Calendar"
    Then I should see "created Tasks"
    Then I should see "created Announcements"
    Then I should see "created Discussion Forum"
