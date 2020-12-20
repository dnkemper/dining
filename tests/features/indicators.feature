@api
Feature: Display food item traits
    In order to prevent allergic reactions
    Customers should be able to
    See correctly-labeled food item traits

    Scenario: Test food item traits
      Given "allergy_and_nutrition" terms:
        | name        | field_an_label      | field_an_abbreviation | field_an_background_color |
        | gluten      | Contains Gluten     | G                     | #eeeee                    |
        | shell fish  | Contains Shellfish  | SF                    | #dddddd                   |
      Given burge location exists
      Given Cached burge data
      When I go to "locations/burge-market-place"
      Then I should get a "200" HTTP response
      And I should see "Build Your Own Omelet"
#      And I should see "Contains Gluten"
#      And I should see "Contains Shellfish"

