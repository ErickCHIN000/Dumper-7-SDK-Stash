#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFeatureFlag : uint8
{
	None                           = 0,
	AutomatedTesting1              = 1,
	AutomatedTesting2              = 2,
	AutomatedTesting3              = 3,
	NPCSatisfaction                = 4,
	CollectInfo                    = 6,
	InWorldVoip                    = 9,
	MultipleInteractionPointsOnStructures = 11,
	PrototypePOI                   = 12,
	PrototypeStructureContent      = 13,
	OverrideLoginFlow              = 14,
	StructureVolumeSystems         = 20,
	PrototypeKeyBindings           = 23,
	SanctuaryStartFlow             = 31,
	LanguageSwitching              = 32,
	ThirdPersonView                = 33,
	ExperimentalPlugs              = 35,
	RealmChat                      = 36,
	ServerTravelInTutorial         = 37,
	PrivateNames                   = 40,
	PlayWithOthers                 = 41,
	RealmPermissions               = 44,
	PartyLeader                    = 45,
	FactionStoreV2                 = 46,
	S0_Antiquarian                 = 47,
	S0_Provisioner                 = 48,
	S0_Gloom                       = 49,
	S0_Astrolabe                   = 50,
	S0_Hunt                        = 51,
	InviteToRealm                  = 53,
	S1_NPCs                        = 54,
	VoipAllowPublicChat            = 55,
	Redemptions                    = 57,
	ServerSlam                     = 58,
	AllowTextToSpeech              = 59,
	ExitSurvey                     = 60,
	EFeatureFlag_MAX               = 61,
};

enum class EFeatureFlagStatus : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	EFeatureFlagStatus_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x18 - 0x8)
// ScriptStruct FeatureFlagsRuntime.FeatureSetRow
struct FFeatureSetRow : public FTableRowBase
{
public:
	TArray<enum class EFeatureFlag>              EnabledFlags;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FeatureFlagsRuntime.FeatureSetContent
struct FFeatureSetContent : public FTableRowBase
{
public:
	enum class EFeatureFlag                      ActiveFeatureFlag;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UDataTable>>     TablesToInclude;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct FeatureFlagsRuntime.FeatureSetAndDebugContent
struct FFeatureSetAndDebugContent : public FFeatureSetContent
{
public:
	bool                                         IsDebugRealm;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


