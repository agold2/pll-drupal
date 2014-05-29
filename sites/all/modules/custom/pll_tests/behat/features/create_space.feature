@pll @javascript
Feature: Spaces
  As a product owner
  I need to know that Spaces are working as intended
  In order for members to collaborate

  Scenario: Creates new user
    Given I am on "/user/login"
    And I fill in "admin" for "Username"
    And I fill in "admin" for "Password"
    And I press "Log in"
    When I visit "/admin/people/create"
    And I fill in the following:
      | Username | auth |
      | Password | auth |
      | Confirm password | auth |
      | E-mail address | auth@example.com |
      | Display Name   | Authenticated user |
    And I press "Create new account"
    Then I should see "Created a new user account for auth."

  Scenario: Admin creates open space
    Given I am on "/user/login"
    And I fill in "admin" for "Username"
    And I fill in "admin" for "Password"
    And I press "Log in"
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    Then I should see "Open - accessible to all site users"
    And I press "Publish"
    Then I should see "Space Type field is required."
    Then I should see "Title field is required."
    Then I should see "Description field is required."
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
      | body[und][0][value] | This description of open Space 1 will appear in the Space search results for authenticated users. |
    And I select "Interest Based Community" from "Space Type"
    And I press "Publish"
    Then the "h1" element should contain "Space 1"
    And I click the add space content button
    And I click "Discussion Post"
    Then I should see "Create Discussion Post"
    Then I should see "Notifications"
    And I press "Publish"
    Then I should see "Title field is required."
    And I fill in the following:
      | Title |test discussion post|
      | Editor | plain_text |
      | body[und][0][value] | Body field text for discussion post. |
    And I press "Publish"
    Then I should see the text "Discussion Post test discussion post has been created."
    Then I should see the text "New Reply"



  Scenario: Create Private Space
    Given I am on "/user/login"
    And I fill in "admin" for "Username"
    And I fill in "admin" for "Password"
    And I press "Log in"
    When I visit "/node/add/oa-space"
    Then I should see "Create Default Space"
    And I select the radio button "Private - accessible only to space members"
    And I fill in the following:
      | Title |Space 1 |
      | Editor | plain_text |
      | body[und][0][value] | Testing text body |
    And I select "Project Based Community" from "Space Type"
    And I press "Publish"
    Then I should see "The Title field requires a unique value"
    And I fill in "Space 2" for "Title"
    And I press "Publish"
    Then the "h1" element should contain "Space 2"
    And I should see "Private"

  Scenario: Authenticated user can see Open space, cannot see Private space
    Given I am on "/user/login"
    And I fill in "auth" for "Username"
    And I fill in "auth" for "Password"
    And I press "Log in"
    When I go to "/space/space-2"
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
    Then I should see "test discuss"

  @now
  Scenario: Authenticated user can request to join open space
    Given I am on "/user/login"
    And I fill in "auth" for "Username"
    And I fill in "auth" for "Password"
    And I press "Log in"
    And I go to "/space/space-1"
    Then the "h1" element should contain "Space 1"
    And I click "Request to join space"

    Then the "h1" element should contain "Space 1"
    Then I should see a ".pane-add-space-content" element
    And I click the add space content button
    And I click "Discussion Post"
    Then I should see "Create Discussion Post"
    Then I should see "Notifications"
    And I press "Publish"
    Then I should see "Title field is required."
    And I fill in the following:
      | Title |discussion started by space member|
      | Editor | plain_text |
      | body[und][0][value] | Body field text for discussion post. |
    And I press "Publish"
    Then I should see "discussion started by space member"
    And I should see "Reply"
    #Then the "h2" element should contain "Let's discuss"

  @now
  Scenario: Anonymous user cannot create space content
    Given I am on "/space/space-1"
    Then I should not see a ".pane-add-space-content" element

  @now
  Scenario: Anonymous user prompted to login when attempting to subscribe to space
    Given I am on "/space/space-1"
    And I click "Subscribe to space"
    Then I should see "Enter the password that accompanies your username."


  Scenario: Anonymous sees open space content
    Given I am on "/space/space-1"
    And I click "Space 1"
    Then the "h1" element should contain "Space 1"
    Then I should see "created Calendar"
    Then I should see "created Tasks"
    Then I should see "created Announcements"
    Then I should see "created Discussion Forum"
    Then I should see "test discuss"


  Scenario:
