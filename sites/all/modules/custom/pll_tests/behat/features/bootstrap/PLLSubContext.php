<?php
/**
 * @file
 * Provide Behat step-definitions for PLL.
 */

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class PLLSubContext extends BehatContext implements DrupalSubContextInterface {
  /**
   * Initializes context.
   */
  public function __construct(array $parameters = array()) {
  }

  public static function getAlias() {
    return 'pll';
  }

  /**
   * Get the session from the parent context.
   */
  protected function getSession() {
    return $this->getMainContext()->getSession();
  }

  /**
   * @Given /^I click the add space content button$/
   */
  public function iClickTheAddSpaceContentButton() {
    $script = "jQuery('.pane-add-space-content .dropdown-toggle').dropdown('toggle')";
    return $this->getSession()->evaluateScript($script);

  }

}

