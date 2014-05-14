@api @javascript @pll
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

Scenario: Admin creates private space
  #Given I am logged in as a user with the "administrator" role
  When I visit "/node/add/oa-space"
  Then I should see "Access Denied"
  Then I should see "Create Default Space"
  And I select the radio button "Private - accessible only to space members"
  And I fill in the following:
    | Title |Space 2 |
    | Editor | plain_text |
    | body[und][0][value] | Testing text body |
  And I press "Publish"
  Then the "h1" element should contain "Space 2"
  And I should see "Private"

