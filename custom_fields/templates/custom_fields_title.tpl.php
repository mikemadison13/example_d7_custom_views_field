<div class="views-field views-field-title">
  <span class='field-label'><?php print t($type); ?></span>
  <span class="field-content"><?php print l($title, $path); ?>
    <?php if (isset($size)): ?>
      <span class='fileSize'>(<?php print $size;?>)</span>
    <?php endif; ?>
  </span>
  <?php if (isset($field_kit_1) && isset($field_kit_2)): ?>
    <div class='gallery-qtip-link btp-fieldkit-node-addremove-qtip'>
      <div class='gallery-qtip-tooltip'>
        <?php print $field_kit_1; ?>
      </div>
      <div class='btp-fieldkit-node-addremove'>
        <?php print $field_kit_2; ?>
      </div>
    </div>
  <?php endif; ?>
</div>