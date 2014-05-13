@api @javascript @pll
Feature: Create space

Scenario: Admin creates space
  Given I am logged in as a user with the "administrator" role
  When I visit "/node/add/oa-space"
  Then I should see "Create Default Space"
  And I fill in the following:
    | Title | Testing title |
    | Editor | plain_text |
    | body[und][0][value] | Testing text body |
  And I press "Publish"
  Then the "h1" element should contain "Testing title"
