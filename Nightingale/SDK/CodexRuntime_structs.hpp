#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECodexNotificationType : uint8
{
	Invalid                        = 0,
	HUDNotificationOnly            = 1,
	ShowPopUpOnAcquire             = 2,
	ShowGuidebookMenuOnAcquire     = 3,
	Silent                         = 4,
	ECodexNotificationType_MAX     = 5,
};

enum class ECodexTemplate : uint8
{
	Invalid                        = 0,
	Test                           = 1,
	Default                        = 2,
	GenericZero                    = 3,
	GenericOne                     = 4,
	Letter                         = 5,
	Telegram                       = 6,
	ArtworkLandscape               = 7,
	ArtworkPortraitLeft            = 8,
	ArtworkPortraitRight           = 9,
	StoryletLetterWhispersA        = 10,
	StoryletLetterWhispersB        = 11,
	StoryletJournalQuartermain     = 12,
	StoryletJournalCalamity        = 13,
	TarotReading                   = 14,
	ECodexTemplate_MAX             = 15,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xE4 (0xF0 - 0xC)
// ScriptStruct CodexRuntime.CodexEntry
struct FCodexEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_D13[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct FGuid>                           ContributingGuids;                                 // 0x18(0x50)(SaveGame, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 UnlockedSubentryTags;                              // 0x68(0x20)(BlueprintVisible, BlueprintReadOnly, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1A[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CodexRuntime.CodexAssetReference
struct FCodexAssetReference
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CodexSubentryTag;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CodexRuntime.CodexSubentry
struct FCodexSubentry
{
public:
	struct FGameplayTag                          CodexSubentryTag;                                  // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SubentryText;                                      // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x80 (0x188 - 0x108)
// ScriptStruct CodexRuntime.CodexEntryArraySerializer
struct FCodexEntryArraySerializer : public FFastArraySerializer
{
public:
	uint8                                        Pad_D3A[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCodexEntry>                   Items;                                             // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


