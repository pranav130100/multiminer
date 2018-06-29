#pragma once

/*
 * Dev donation.
 * Percentage of your hashing power that you want to donate to the developer, can be 0.0 if you don't want to do that.
 * Example of how it works for the default setting of 2.5:
 * You miner will mine into your usual pool for 97.5 minutes, then switch to the developer's pool for 2.5 minute.
 * Switching is instant, and only happens after a successful connection, so you never loose any hashes.
 */

constexpr double fDevDonationLevel = 2.5 / 100.0;
