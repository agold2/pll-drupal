@pll @api
Feature: Space access control

  Scenario: Space access control
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    Then I should see "Open - accessible to all site users"
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
      | body[und][0][value] | Testing text body |
    And I select "Interest Based Community" from "Space Type"
    And I press "Publish"
    Then the "h1" element should contain "Space 1"
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    And I select the radio button "Private - accessible only to space members"
    And I fill in the following:
      | Title |Space 2 |
      | Editor | plain_text |
      | body[und][0][value] | Testing text body |
    And I select "Project Based Community" from "Space Type"
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
    And I click "Space 1"
    Then the "h1" element should contain "Space 1"
