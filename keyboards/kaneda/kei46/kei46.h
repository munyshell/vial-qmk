#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	k0A, k0B, k0C, k0D, k0E, k0F, k4F, k4E, k4D, k4C, k4B, k4A, k1A, k1B, k1C, k1D, k1E, k1F, k5F, k5E, k5D, k5C, k5B, k5A, k2A, k2B, k2C, k2D, k2E, k2F, k6F, k6E, k6D, k6C, k6B, k6A, k3A, k3B, k3C, k3D, k3E, k7F, k7E, k7D, k7C, k7B, k7A \
) { \
	{k0A, k0B, k0C, k0D, k0E, k0F}, \
	{k1A, k1B, k1C, k1D, k1E, k1F}, \
	{k2A, k2B, k2C, k2D, k2E, k2F}, \
	{k3A, k3B, k3C, k3D, k3E, XXX}, \
	{k4A, k4B, k4C, k4D, k4E, k4F}, \
	{k5A, k5B, k5C, k5D, k5E, k5F}, \
	{k6A, k6B, k6C, k6D, k6E, k6F}, \
	{k7A, k7B, k7C, k7D, k7E, k7F} \
}
