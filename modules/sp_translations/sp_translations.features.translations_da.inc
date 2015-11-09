<?php
/**
 * @file
 * sp_translations.features.translations_da.inc
 */

/**
 * Implements hook_translations_da_defaults().
 */
function sp_translations_translations_da_defaults() {
  $translations = array();
  $translatables = array();
  $translations['da:default']['01411f681ddd3eaf540fbf77285319e6'] = array(
    'source' => 'One column',
    'context' => '',
    'location' => '',
    'translation' => 'En kolonne',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('One column', array(), array('context' => ''));
  $translations['da:default']['01b28c740e2c048d35f1f6a10df9ec21'] = array(
    'source' => 'No galleries have been added to this group.',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Der er ikke blevet føjet nogle gallerier til denne gruppe.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No galleries have been added to this group.', array(), array('context' => ''));
  $translations['da:default']['021f783f273980c358acacd31a4fcf0e'] = array(
    'source' => 'You aren\'t following any topics.',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Du følger ingen emner.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You aren\'t following any topics.', array(), array('context' => ''));
  $translations['da:default']['03b2cf031dfe5c3422d9850ddabe1304'] = array(
    'source' => 'Flag as offensive',
    'context' => '',
    'location' => '/node/203',
    'translation' => 'Angiv som stødende',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Flag as offensive', array(), array('context' => ''));
  $translations['da:default']['04053a020059b3c0709166c478844935'] = array(
    'source' => 'Maximum number of attendees',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Maksimum antal deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Maximum number of attendees', array(), array('context' => ''));
  $translations['da:default']['04cc33a179a66c6b06b408295154220c'] = array(
    'source' => 'No unread messages',
    'context' => '',
    'location' => '/home',
    'translation' => 'Ingen ulæste beskeder',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No unread messages', array(), array('context' => ''));
  $translations['da:default']['0642c3f87ea1fe947eebd8a9c7cb41b1'] = array(
    'source' => 'Page @count',
    'context' => '',
    'location' => '/views/ajax',
    'translation' => 'Side @count',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Page @count', array(), array('context' => ''));
  $translations['da:default']['08c0291fe252db9fdbcf34970c62df6a'] = array(
    'source' => 'Add as trusted contact',
    'context' => '',
    'location' => '/users/john-doe',
    'translation' => 'Tilføj som ven',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add as trusted contact', array(), array('context' => ''));
  $translations['da:default']['0bff4ce7af52fe521a4a48ccc621f6bd'] = array(
    'source' => 'Attendees',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attendees', array(), array('context' => ''));
  $translations['da:default']['115d06b2fbc9275c4ff2579ec51ec398'] = array(
    'source' => 'You\'re attending',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Du deltager i',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You\'re attending', array(), array('context' => ''));
  $translations['da:default']['13a76d28b77169727701fd2d1449ea87'] = array(
    'source' => 'most active',
    'context' => '',
    'location' => '',
    'translation' => 'mest aktive',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('most active', array(), array('context' => ''));
  $translations['da:default']['156dde9a3ad3a363b8db756e112dd256'] = array(
    'source' => 'Trusted Contacts',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Venner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Trusted Contacts', array(), array('context' => ''));
  $translations['da:default']['161133b6c2d0f520d9221ec8180c16e2'] = array(
    'source' => 'You have no pending invitations.',
    'context' => '',
    'location' => '/user/1/contacts?qt-commons_trusted_contacts=invitations',
    'translation' => 'Du har ingen ubesvarede invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You have no pending invitations.', array(), array('context' => ''));
  $translations['da:default']['197dab699d1048b68829141fb91a69b1'] = array(
    'source' => 'Group manager: !manager',
    'context' => '',
    'location' => '/group/node/213/admin/people',
    'translation' => 'Gruppens administrator !manager',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Group manager: !manager', array(), array('context' => ''));
  $translations['da:default']['1a055ae46d775dc52d5c29883136a7f7'] = array(
    'source' => '<em>No results.</em>',
    'context' => '',
    'location' => '/groups',
    'translation' => '<em>Ingen resultater.</em>',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<em>No results.</em>', array(), array('context' => ''));
  $translations['da:default']['1a0ec3519bd2cb25a710c53688f0dc81'] = array(
    'source' => '[comment_count] comments',
    'context' => '',
    'location' => '/index.php',
    'translation' => '[comment_count] kommentarer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('[comment_count] comments', array(), array('context' => ''));
  $translations['da:default']['1c8ee36688aa20d411547dcb936f9c02'] = array(
    'source' => 'Create an @name',
    'context' => '',
    'location' => '/node/add/event?og_group_ref=203&destination=node/203',
    'translation' => 'Opret @name',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create an @name', array(), array('context' => ''));
  $translations['da:default']['1e04092a6e406cad54c23d67448e492b'] = array(
    'source' => 'Invitations',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Invitations', array(), array('context' => ''));
  $translations['da:default']['1e97a7046900c466af4146e82dfe7760'] = array(
    'source' => 'You are the group manager',
    'context' => '',
    'location' => '',
    'translation' => 'Du er gruppens administrator',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You are the group manager', array(), array('context' => ''));
  $translations['da:default']['2328c23cad77ed68f0c4aac3ed5e5c18'] = array(
    'source' => 'Private Messages & Invitations',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Private beskeder & invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Private Messages & Invitations', array(), array('context' => ''));
  $translations['da:default']['2445e5e347a8da7c70cf9df1cd2d10f0'] = array(
    'source' => 'Create group',
    'context' => '',
    'location' => '/grupper',
    'translation' => 'Opret gruppe',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create group', array(), array('context' => ''));
  $translations['da:default']['24859b716f47284fe864a938e9025fce'] = array(
    'source' => 'Group contributors',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Bidgragydere i gruppe',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Group contributors', array(), array('context' => ''));
  $translations['da:default']['24c714ccb3857346b52bfe17e287d210'] = array(
    'source' => 'Followers',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Følgere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Followers', array(), array('context' => ''));
  $translations['da:default']['2840bf7f37458ceefe94a4e48ecfd6ad'] = array(
    'source' => 'Create event',
    'context' => '',
    'location' => '/events',
    'translation' => 'Opret begivenhed',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create event', array(), array('context' => ''));
  $translations['da:default']['2fc1a8701c44bf595a55ed72b3c18dc3'] = array(
    'source' => 'Edit account',
    'context' => '',
    'location' => '/users/henrik-bak-thomassen',
    'translation' => 'Rediger konto',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Edit account', array(), array('context' => ''));
  $translations['da:default']['300ed6b3657a79ca355a053060f3609f'] = array(
    'source' => 'Post to specific groups',
    'context' => '',
    'location' => '/',
    'translation' => 'Udgiv til bestemte grupper',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Post to specific groups', array(), array('context' => ''));
  $translations['da:default']['37bf3d8d9b9798b4b24aa6d945d4581f'] = array(
    'source' => 'No @type have been created.',
    'context' => '',
    'location' => '/',
    'translation' => 'Ingen @type er blevet oprettet. ',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No @type have been created.', array(), array('context' => ''));
  $translations['da:default']['38c7ebb8372159e615d954484f241dc1'] = array(
    'source' => 'a moment',
    'context' => '',
    'location' => 'profiles/commons/modules/contrib/timeago/timeago.js',
    'translation' => 'et øjeblik',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('a moment', array(), array('context' => ''));
  $translations['da:default']['3903aab323863bd2e9b68218a7a65ebd'] = array(
    'source' => 'Follow',
    'context' => '',
    'location' => '/',
    'translation' => 'Følg',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Follow', array(), array('context' => ''));
  $translations['da:default']['3a3c50c19379ddec87df140ed7e06c41'] = array(
    'source' => 'Two column 8-4',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'To kolonner 8-4',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Two column 8-4', array(), array('context' => ''));
  $translations['da:default']['419c8d81d6592272c1df0e6c1b277240'] = array(
    'source' => 'Organizers',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Arrangører',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Organizers', array(), array('context' => ''));
  $translations['da:default']['41f0622a48a8d39bcf3a78f2849ef66b'] = array(
    'source' => 'No Invitations',
    'context' => '',
    'location' => '/user/1/contacts?qt-commons_trusted_contacts=invitations',
    'translation' => 'Ingen invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No Invitations', array(), array('context' => ''));
  $translations['da:default']['42e7094ca072ee2be952cffb61dca09e'] = array(
    'source' => 'If checked, you\'ll automatically sign up for email notifications when you follow something. Leave unchecked to default to signing up only for activity stream notifications',
    'context' => '',
    'location' => '/user/4/notification-settings',
    'translation' => 'Hvis valgt, vil du automatisk tilvælge at modtage email notifikationer når du følger noget.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('If checked, you\'ll automatically sign up for email notifications when you follow something. Leave unchecked to default to signing up only for activity stream notifications', array(), array('context' => ''));
  $translations['da:default']['434f3e19851d87e117f6d64b9838fe1a'] = array(
    'source' => 'New invitations',
    'context' => '',
    'location' => '/',
    'translation' => 'Nye invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('New invitations', array(), array('context' => ''));
  $translations['da:default']['43d8ef1f880b33f9229dcc894bc8199d'] = array(
    'source' => 'People %1 follows',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Personer %1 følger',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('People %1 follows', array(), array('context' => ''));
  $translations['da:default']['4b74a74198d64fb17444082140bd97b1'] = array(
    'source' => 'Create a @name',
    'context' => '',
    'location' => '/node/add/gallery?og_group_ref=203&destination=node/203',
    'translation' => 'Opret @name',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create a @name', array(), array('context' => ''));
  $translations['da:default']['4c17a96099dc58f51968a80d5683341a'] = array(
    'source' => 'Created',
    'context' => 'timeago',
    'location' => '/home',
    'translation' => 'Oprettet for',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Created', array(), array('context' => 'timeago'));
  $translations['da:default']['4ec1d3f289b096e1970eabd0573d27f2'] = array(
    'source' => '!start-date to !end-date, !start-time - !end-time',
    'context' => '',
    'location' => '/',
    'translation' => '!start-date til !end-date, !start-time - !end-time',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('!start-date to !end-date, !start-time - !end-time', array(), array('context' => ''));
  $translations['da:default']['4f7a87d5a545b11db41c88391857179c'] = array(
    'source' => 'Total content: @count',
    'context' => '',
    'location' => '/group/node/213/admin/people',
    'translation' => 'Antal indhold: @count',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Total content: @count', array(), array('context' => ''));
  $translations['da:default']['52ebaa823054d48bb0c8751912ca1c79'] = array(
    'source' => '@count events',
    'context' => '',
    'location' => '/events',
    'translation' => '@count begivenheder',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('@count events', array(), array('context' => ''));
  $translations['da:default']['57f77312d962871ea1efa03bebc1cfa0'] = array(
    'source' => 'People who follow %1',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Person som følger %1',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('People who follow %1', array(), array('context' => ''));
  $translations['da:default']['5ab92e73966ab02796761d1d2414055e'] = array(
    'source' => 'This person has no followers.',
    'context' => '',
    'location' => '',
    'translation' => 'Denne person har ingen følgere.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('This person has no followers.', array(), array('context' => ''));
  $translations['da:default']['5ae582fd00abdad8ec6a6ec9a778d3e0'] = array(
    'source' => 'Most active groups',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Mest aktive grupper',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Most active groups', array(), array('context' => ''));
  $translations['da:default']['5bb8de41614780d1fd6c1d032464e061'] = array(
    'source' => 'Gallery Image',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Galleri billeder',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Gallery Image', array(), array('context' => ''));
  $translations['da:default']['5c342ee9ce1bf07932a1f66af2be7652'] = array(
    'source' => 'followers',
    'context' => '',
    'location' => '/groups/vestibulum-ac-diam-sit-amet-quam',
    'translation' => 'følgere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('followers', array(), array('context' => ''));
  $translations['da:default']['606b13640a0597f34f632d3debe22e7f'] = array(
    'source' => 'Messages & invitations',
    'context' => '',
    'location' => '/',
    'translation' => 'Beskeder & invitationer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Messages & invitations', array(), array('context' => ''));
  $translations['da:default']['63a9ce99cd57ae21762493c64faf6117'] = array(
    'source' => 'No messages available.',
    'context' => '',
    'location' => '/user/1/contacts?qt-commons_trusted_contacts=invitations',
    'translation' => 'Ingen beskeder tilgængelige.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No messages available.', array(), array('context' => ''));
  $translations['da:default']['64980253ae8b8a30d8b13b9b73040b2a'] = array(
    'source' => 'Don\'t receive email updates',
    'context' => '',
    'location' => '/admin/content',
    'translation' => 'Modtag ikke email opdateringer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Don\'t receive email updates', array(), array('context' => ''));
  $translations['da:default']['64a9a07f81f94a0a5215f31631f45d82'] = array(
    'source' => 'You have no trusted contacts.',
    'context' => '',
    'location' => '/user/1/contacts?qt-commons_trusted_contacts=invitations',
    'translation' => 'Du har ikke tilføjet nogen venner endnu.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You have no trusted contacts.', array(), array('context' => ''));
  $translations['da:default']['667ba1ecc97060ef16bb9bcd00e11b4c'] = array(
    'source' => 'Content overview call to action',
    'context' => '',
    'location' => '/grupper',
    'translation' => 'Indholdsoversigt call to action',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Content overview call to action', array(), array('context' => ''));
  $translations['da:default']['668eff02954142f05fc97a0b60e80fdc'] = array(
    'source' => 'most recent',
    'context' => '',
    'location' => '',
    'translation' => 'seneste',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('most recent', array(), array('context' => ''));
  $translations['da:default']['6dc07ce4122f347b231b46e2c0236222'] = array(
    'source' => 'Community statistics',
    'context' => '',
    'location' => '/grupper',
    'translation' => 'Community statistik',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Community statistics', array(), array('context' => ''));
  $translations['da:default']['6e4078d4ef11feb2f01734156f7c9ad8'] = array(
    'source' => 'Site content',
    'context' => '',
    'location' => '/',
    'translation' => 'Side indhold',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Site content', array(), array('context' => ''));
  $translations['da:default']['6f796b0e6deb4f4c2c0ee0ed5e10e117'] = array(
    'source' => 'Following',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'Følger',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Following', array(), array('context' => ''));
  $translations['da:default']['754ddc543d7d6d2ff883b04491f710bf'] = array(
    'source' => 'Group was created by',
    'context' => '',
    'location' => '/node/203',
    'translation' => 'Gruppen blev oprettet af',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Group was created by', array(), array('context' => ''));
  $translations['da:default']['772c4866b3314d4aa505759251cb9ed1'] = array(
    'source' => ' comments',
    'context' => '',
    'location' => '',
    'translation' => 'kommentarer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t(' comments', array(), array('context' => ''));
  $translations['da:default']['779e51977fa2eeafff9ddd8913b4c1d6'] = array(
    'source' => 'Send email notifications by default.',
    'context' => '',
    'location' => '',
    'translation' => 'Modtag email notifikationer som standard',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Send email notifications by default.', array(), array('context' => ''));
  $translations['da:default']['79ae6e308dcdcc5e31935d5d24cabb81'] = array(
    'source' => '%d minutes',
    'context' => '',
    'location' => 'profiles/commons/modules/contrib/timeago/timeago.js',
    'translation' => '%d minutter',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('%d minutes', array(), array('context' => ''));
  $translations['da:default']['7d3ca287745d36f20a6dbad4787f1e78'] = array(
    'source' => '<strong>[comment_count]</strong> comments',
    'context' => '',
    'location' => '/index.php',
    'translation' => '<strong>[comment_count]</strong> kommentarer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<strong>[comment_count]</strong> comments', array(), array('context' => ''));
  $translations['da:default']['815cdbccc938f7a83bd6aa0ab886d594'] = array(
    'source' => '@flag you follow <span class="user-follow-count">@count</span>',
    'context' => '',
    'location' => '/user/4/notification-settings',
    'translation' => '@flag du følger <span class="user-follow-count">@count</span>',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('@flag you follow <span class="user-follow-count">@count</span>', array(), array('context' => ''));
  $translations['da:default']['8606e9fa1b12bfd163d02379e2a9be3d'] = array(
    'source' => 'Total members: @count',
    'context' => '',
    'location' => '/group/node/213/admin/people',
    'translation' => 'Antal medlemmer: @count',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Total members: @count', array(), array('context' => ''));
  $translations['da:default']['86e0f1c0bbc2176380b0daccbeae36f5'] = array(
    'source' => 'Title: %title.',
    'context' => '',
    'location' => '/admin/structure/pages/edit/page-groups_directory',
    'translation' => 'Titel: %title.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Title: %title.', array(), array('context' => ''));
  $translations['da:default']['8858af516b45d3dad24cf9069b09c6bc'] = array(
    'source' => 'Logo list',
    'context' => '',
    'location' => '/admin/config/regional/language',
    'translation' => 'Logoliste',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Logo list', array(), array('context' => ''));
  $translations['da:default']['88be978be3d3693d34db4d72529609e5'] = array(
    'source' => 'No posts have been added to this group.',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Der er ikke blevet føjet nogle indlæg til denne gruppe.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No posts have been added to this group.', array(), array('context' => ''));
  $translations['da:default']['918269704060decfbda1138978142dd3'] = array(
    'source' => 'Limited to',
    'context' => '',
    'location' => '/',
    'translation' => 'Begrænset til',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Limited to', array(), array('context' => ''));
  $translations['da:default']['93a7d2bfc510a5873764c1b9373efe7e'] = array(
    'source' => 'Any site member can contribute',
    'context' => '',
    'location' => '/node/244/edit',
    'translation' => 'Alle medlemmer af siden kan bidrage',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Any site member can contribute', array(), array('context' => ''));
  $translations['da:default']['94c48da96764e47b1f4c415a9308c8d0'] = array(
    'source' => '<strong>[capacity_used]</strong> attendees,',
    'context' => '',
    'location' => '/index.php',
    'translation' => '<strong>[capacity_used]</strong> deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<strong>[capacity_used]</strong> attendees,', array(), array('context' => ''));
  $translations['da:default']['95c58d397509034ec855e6b92662d6b9'] = array(
    'source' => 'Three column 8-8-8',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'Tre kolonner 4-4-4',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Three column 8-8-8', array(), array('context' => ''));
  $translations['da:default']['9961c9c7eeb6a188ada6aae5ab4251b4'] = array(
    'source' => 'Attend',
    'context' => '',
    'location' => '/events',
    'translation' => 'Deltag',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Attend', array(), array('context' => ''));
  $translations['da:default']['99e803d7d1a306902a90e3e4c4dedc0f'] = array(
    'source' => 'Other content',
    'context' => '',
    'location' => '/admin/config/regional',
    'translation' => 'Andet indhold',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Other content', array(), array('context' => ''));
  $translations['da:default']['a2cee312ad1972714c47ee4e14e8d7c6'] = array(
    'source' => 'Joining requires admin approval',
    'context' => '',
    'location' => '/admin/config/regional/translate/edit/14735?destination=admin/config/regional/translate/translate',
    'translation' => 'Medlemsskab kræver godkendelse af en administrator',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Joining requires admin approval', array(), array('context' => ''));
  $translations['da:default']['a30fb48e54d1e6f5a4d12f5612fe3593'] = array(
    'source' => ' attendees,',
    'context' => '',
    'location' => '',
    'translation' => 'deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t(' attendees,', array(), array('context' => ''));
  $translations['da:default']['a86de449a74ad7aa4d2a08a65e009fb9'] = array(
    'source' => ' attendees',
    'context' => '',
    'location' => '',
    'translation' => ' deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t(' attendees', array(), array('context' => ''));
  $translations['da:default']['abf1ba7a0e7a62d5f7b399ed8eeef404'] = array(
    'source' => 'New custom content',
    'context' => '',
    'location' => '/',
    'translation' => 'Nyt brugerdefineret indhold',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('New custom content', array(), array('context' => ''));
  $translations['da:default']['b1df7a23318e45e326f3e62c382d7aeb'] = array(
    'source' => '<p>No upcoming events.</p>',
    'context' => '',
    'location' => '/admin/structure/views/view/commons_events_upcoming/edit/panel_pane_2',
    'translation' => '<p>Ingen kommende begivenheder.</p>',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<p>No upcoming events.</p>', array(), array('context' => ''));
  $translations['da:default']['b34f3cda1ad5eaf560448a73aab6bbc1'] = array(
    'source' => 'You created',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Du oprettede',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You created', array(), array('context' => ''));
  $translations['da:default']['b382373d090f912081dbd3ea8c9ffb05'] = array(
    'source' => 'You are attending.',
    'context' => '',
    'location' => '/events',
    'translation' => 'Du deltager.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You are attending.', array(), array('context' => ''));
  $translations['da:default']['b418d3dc3e768c1e474805b8c43afaee'] = array(
    'source' => 'This person isn\'t following anyone.',
    'context' => '',
    'location' => '',
    'translation' => 'Denne person følger ikke nogen.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('This person isn\'t following anyone.', array(), array('context' => ''));
  $translations['da:default']['bac3a4af28d23c081bb9dfe0da032d3a'] = array(
    'source' => 'Create a @bundle',
    'context' => '',
    'location' => '/',
    'translation' => 'Opret @bundle',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create a @bundle', array(), array('context' => ''));
  $translations['da:default']['bd143965082e32cb257c3382c583aa0a'] = array(
    'source' => 'Sorted by',
    'context' => '',
    'location' => '',
    'translation' => 'Sorteret efter',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Sorted by', array(), array('context' => ''));
  $translations['da:default']['be1ab1632e4285edc3733b142935c60b'] = array(
    'source' => 'like',
    'context' => '',
    'location' => '/node/203',
    'translation' => 'synes om',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('like', array(), array('context' => ''));
  $translations['da:default']['c4d055a48fb88b503d31ae62c004b770'] = array(
    'source' => 'Nobody has posted into this group yet.',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Ingen har bidraget til denne gruppe endnu.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Nobody has posted into this group yet.', array(), array('context' => ''));
  $translations['da:default']['c8e6a7ed1489c036564b6bc24c92cca4'] = array(
    'source' => 'Created by',
    'context' => '',
    'location' => '/',
    'translation' => 'Oprettet af',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Created by', array(), array('context' => ''));
  $translations['da:default']['cb52586ec7e17b20f037f948611074b5'] = array(
    'source' => 'What\'s going on?',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Hvad sker der?',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('What\'s going on?', array(), array('context' => ''));
  $translations['da:default']['cbcfdc9899edad6530f65bc5ae862cb2'] = array(
    'source' => 'Recent contributors',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Seneste bidragydere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Recent contributors', array(), array('context' => ''));
  $translations['da:default']['cd502ea320c229740ba7f3699f51e10c'] = array(
    'source' => 'Receive email updates',
    'context' => '',
    'location' => '/admin/content',
    'translation' => 'Modtag opdatering via email',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Receive email updates', array(), array('context' => ''));
  $translations['da:default']['cd70035a55f46ca1695056fa66c70a66'] = array(
    'source' => 'Post to',
    'context' => '',
    'location' => '/',
    'translation' => 'Udgiv til',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Post to', array(), array('context' => ''));
  $translations['da:default']['cd936442fcff7b105e2e15da19207fed'] = array(
    'source' => 'Create new %type',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Opret ny %type',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create new %type', array(), array('context' => ''));
  $translations['da:default']['cdca48ec5dde79b84b395c0c557bb290'] = array(
    'source' => '%d days',
    'context' => '',
    'location' => 'profiles/commons/modules/contrib/timeago/timeago.js',
    'translation' => '%d dage',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('%d days', array(), array('context' => ''));
  $translations['da:default']['ce12ff7cd023cbf13aa8e11794b6f3a2'] = array(
    'source' => 'Awaiting confirmation',
    'context' => '',
    'location' => '/users/henrik-bak-thomassen',
    'translation' => 'Afventer bekræftelse',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Awaiting confirmation', array(), array('context' => ''));
  $translations['da:default']['ce468657d0d66a89969222140a247dc7'] = array(
    'source' => 'Three column 4-4-4',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'Tre kolonner 4-4-4',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Three column 4-4-4', array(), array('context' => ''));
  $translations['da:default']['ce90734baec4ec541273f87d19432987'] = array(
    'source' => '<span class="commons-event-count">@count</span> attendees',
    'context' => '',
    'location' => '/events',
    'translation' => '<span class="commons-event-count">@count</span> deltagere
',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('<span class="commons-event-count">@count</span> attendees', array(), array('context' => ''));
  $translations['da:default']['cf61a95d3ac240ae555026ac83768337'] = array(
    'source' => 'User profile information',
    'context' => '',
    'location' => '/panels/ajax/ipe/save_form/panel_context%3Apage-groups_directory%3A%3Apage_groups_directory_panel_context%3A%3A%3A%3A',
    'translation' => 'Brugerprofil information',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('User profile information', array(), array('context' => ''));
  $translations['da:default']['d3eec9ad1270849bf34556afaa3037e6'] = array(
    'source' => 'Content you\'re not following',
    'context' => '',
    'location' => '/',
    'translation' => 'indhold du ikke følger',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Content you\'re not following', array(), array('context' => ''));
  $translations['da:default']['d5a76e85ffce3dcb3109b73f712982a7'] = array(
    'source' => 'Control how you are notified of new content and activity. When you follow a group, topic, user, or other content, you\'ll see updates in your content and activity streams, and you will automatically get email updates unlesss you disable emails or unfollow.',
    'context' => '',
    'location' => '/user/4/notification-settings',
    'translation' => 'Kontroller hvordan du bliver underrettet om nyt indhold og aktivitet. Når du følger en gruppe, emne, bruger eller andet indhold, vil du se opdateringer i dine indholds- og aktivitetsstrømme, og du vil automatisk modtage email opdateringer, hvis du ikke deaktiverer emails eller stopper med at følge.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Control how you are notified of new content and activity. When you follow a group, topic, user, or other content, you\'ll see updates in your content and activity streams, and you will automatically get email updates unlesss you disable emails or unfollow.', array(), array('context' => ''));
  $translations['da:default']['d7b35af41274101c9b3e736fd71e451b'] = array(
    'source' => 'Moderated group',
    'context' => '',
    'location' => '/groups/lukket-gruppe',
    'translation' => 'Modereret gruppe',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Moderated group', array(), array('context' => ''));
  $translations['da:default']['daa2efe8c33466843f26bd21c62942a5'] = array(
    'source' => 'Two column 4-8 bricks',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'To kolonner 4-8 udvidet',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Two column 4-8 bricks', array(), array('context' => ''));
  $translations['da:default']['db82d196a4c6b810f3797711d3992ea4'] = array(
    'source' => 'Create @type',
    'context' => '',
    'location' => '/groups',
    'translation' => 'Opret @type',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Create @type', array(), array('context' => ''));
  $translations['da:default']['dbf6e911df07e1388fa0726537babed2'] = array(
    'source' => 'Administer group',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Administrér gruppe',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Administer group', array(), array('context' => ''));
  $translations['da:default']['dc64c714f452c8d6395467224c0fc12b'] = array(
    'source' => 'Joining requires an invitation. The group and content is hidden from non-members.',
    'context' => '',
    'location' => '/admin/config/regional/translate/edit/14735?destination=admin/config/regional/translate/translate',
    'translation' => 'Medlemsskab kræver en invitation. Gruppens indhold er skjult for ikke-medlemmer.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Joining requires an invitation. The group and content is hidden from non-members.', array(), array('context' => ''));
  $translations['da:default']['dffded34c96876a50a41f3a69c15e186'] = array(
    'source' => 'Page 1',
    'context' => '',
    'location' => '/',
    'translation' => 'Side 1',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Page 1', array(), array('context' => ''));
  $translations['da:default']['e064441b5cc8c0076fc1c62f6125ff28'] = array(
    'source' => 'about %d hours',
    'context' => '',
    'location' => 'profiles/commons/modules/contrib/timeago/timeago.js',
    'translation' => 'omkring %d timer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('about %d hours', array(), array('context' => ''));
  $translations['da:default']['e0d14f8e596f001169ecb91adf5ae8a1'] = array(
    'source' => 'You follow',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Du følger',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('You follow', array(), array('context' => ''));
  $translations['da:default']['e4718dc7d6a38f2276a03b109a8d8ac1'] = array(
    'source' => 'Content options are divided by category. Please select a category from the left to proceed.',
    'context' => '',
    'location' => '/panels/ajax/ipe/select-content/panel_context%3Apage-commons_home%3A%3Apage_commons_home_panel_context%3A%3A%3A%3A/footer',
    'translation' => 'Indholdsblokke er inddelt i kategorier. Vælg en kategori i venstre side for at fortsætte.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Content options are divided by category. Please select a category from the left to proceed.', array(), array('context' => ''));
  $translations['da:default']['e48d2b70374c8cfc22fbf8e0dea06b8b'] = array(
    'source' => 'Open to new attendees',
    'context' => '',
    'location' => '/node/add/event?og_group_ref=203&destination=node/203',
    'translation' => 'Åben for nye deltagere',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Open to new attendees', array(), array('context' => ''));
  $translations['da:default']['e5ed46643883f92d1866cd175bb1ab45'] = array(
    'source' => 'User Trusted Contacts',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Brugerens venner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('User Trusted Contacts', array(), array('context' => ''));
  $translations['da:default']['e9f25207215052fda5f14f072eda5227'] = array(
    'source' => 'Add people',
    'context' => '',
    'location' => '/node/203',
    'translation' => 'Tilføj personer',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Add people', array(), array('context' => ''));
  $translations['da:default']['eb5314edf3b6fa21af6b10bb96db27e5'] = array(
    'source' => '%d months',
    'context' => '',
    'location' => 'profiles/commons/modules/contrib/timeago/timeago.js',
    'translation' => '%d måneder',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('%d months', array(), array('context' => ''));
  $translations['da:default']['ebf05e5e038d09c2662dea358c32c8ab'] = array(
    'source' => 'Two column 4-8',
    'context' => '',
    'location' => '/admin/config/regional/translate/translate',
    'translation' => 'To kolonner 4-8',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Two column 4-8', array(), array('context' => ''));
  $translations['da:default']['ede4f95ecd514c31d667de3e5d328bad'] = array(
    'source' => 'Post privately to all trusted contacts',
    'context' => '',
    'location' => '/',
    'translation' => 'Udgiv til alle venner',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Post privately to all trusted contacts', array(), array('context' => ''));
  $translations['da:default']['edeac7af44f564022e41a3a5aad5ec81'] = array(
    'source' => 'Content you\'re following',
    'context' => '',
    'location' => '/',
    'translation' => 'indhold du følger',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Content you\'re following', array(), array('context' => ''));
  $translations['da:default']['f08d50397194b8e1679b11fd16f60ebc'] = array(
    'source' => 'New messages',
    'context' => '',
    'location' => '/',
    'translation' => 'Nye beskeder',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('New messages', array(), array('context' => ''));
  $translations['da:default']['f451359d2088c0cf68ce0fa26188a677'] = array(
    'source' => 'Report as inappropriate',
    'context' => '',
    'location' => '/node/203',
    'translation' => 'Rapporter som upassende',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('Report as inappropriate', array(), array('context' => ''));
  $translations['da:default']['f4f071d296293fc582190cb702e01347'] = array(
    'source' => 'No polls have been added to this group.',
    'context' => '',
    'location' => '/index.php',
    'translation' => 'Der er ikke blevet føjet nogle afstemninger til denne gruppe.',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('No polls have been added to this group.', array(), array('context' => ''));
  $translations['da:default']['fd33af72833904c37843389ec1b083e9'] = array(
    'source' => 'This group has',
    'context' => '',
    'location' => '/groups/vestibulum-ac-diam-sit-amet-quam',
    'translation' => 'Denne gruppe har',
    'plid' => 0,
    'plural' => 0,
  );
  $translatables[] = t('This group has', array(), array('context' => ''));
  return $translations;
}
