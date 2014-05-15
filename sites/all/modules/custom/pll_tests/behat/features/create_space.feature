@pll @api
Feature: Create space

  Scenario: Admin creates public space
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
      | body[und][0][value] | Testing text body |
    And I press "Publish"
    Then the "h1" element should contain "Space 1"
    Then I visit "/user/logout"


  Scenario: Admin creates private space
    Given I am logged in as a user with the "administrator" role
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    And I select the radio button "Private - accessible only to space members"
    And I fill in the following:
      | Title |Space 2 |
      | Editor | plain_text |
      | body[und][0][value] | Testing text body |
    And I press "Publish"
    Then the "h1" element should contain "Space 2"
    And I should see "Private"
    Then I visit "/user/logout"

  Scenario: Authenticated views space catalog
    Given I am logged in as a user with the "authenticated user" role
    When I visit "/spaces"
    Then I should not see the link "Space 2"
    And I should see the link "Space 1"
