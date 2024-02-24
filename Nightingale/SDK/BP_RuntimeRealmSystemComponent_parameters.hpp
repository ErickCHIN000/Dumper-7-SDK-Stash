#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.UpdatePersistedData
struct UBP_RuntimeRealmSystemComponent_C_UpdatePersistedData_Params
{
public:
	class UPersistedRealmConfig*                 Persisted_Object;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPoiDistributionKey_ReturnValue;        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPOIDistributionHash_ReturnValue;       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetRealmSettingsProcessor
struct UBP_RuntimeRealmSystemComponent_C_GetRealmSettingsProcessor_Params
{
public:
	class URealmSettingsProcessor*               Processor;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ProcessorFound;                                    // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_441A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URealmDataSubsystem*                   CallFunc_GetWorldSubsystem_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_FindDataProcessor_ReturnValue;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URealmSettingsProcessor*               K2Node_DynamicCast_AsRealm_Settings_Processor;     // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.RestoreDataFromPersistence
struct UBP_RuntimeRealmSystemComponent_C_RestoreDataFromPersistence_Params
{
public:
	class UPersistedRealmConfig*                 PersistedObject;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ReadTemporalConfig
struct UBP_RuntimeRealmSystemComponent_C_ReadTemporalConfig_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4444[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URealmSettingsProcessor*               CallFunc_GetRealmSettingsProcessor_Processor;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmSettingsProcessor_ProcessorFound; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTemporalConfig                       CallFunc_GetTemporalConfig_ReturnValue;            // 0x18(0x78)(ConstParm)
};

// 0x21 (0x21 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.InitializeResourceProxyBuckets
struct UBP_RuntimeRealmSystemComponent_C_InitializeResourceProxyBuckets_Params
{
public:
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameModeBase*                      K2Node_DynamicCast_AsNWXGame_Mode_Base;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4456[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADynamicResourceSpawningManager*       CallFunc_GetManager_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Configure New Streaming Level
struct UBP_RuntimeRealmSystemComponent_C_Configure_New_Streaming_Level_Params
{
public:
	struct FPOIStreamingLevelDefinition          POI;                                               // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_StreamingLevelProxy_C*             StreamingLevelProxy;                               // 0x178(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Tags;                                              // 0x180(0x20)(Edit, BlueprintVisible)
	TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_SetStreamingDefData_self_CastInput;       // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStreamingLevelProxyInterface> CallFunc_AddGameplayTags_self_CastInput;           // 0x1B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_GetPOITags_POITags;                       // 0x1C0(0x20)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1E0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetUniqueStreamingLevelPrefix
struct UBP_RuntimeRealmSystemComponent_C_GetUniqueStreamingLevelPrefix_Params
{
public:
	class FString                                Prefix;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                OutPrefix;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                UniquePrefix;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x249 (0x249 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnStreamingLevelFromPath
struct UBP_RuntimeRealmSystemComponent_C_SpawnStreamingLevelFromPath_Params
{
public:
	struct FSoftLevelPath                        Path;                                              // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FPOIStreamingLevelDefinition          POI;                                               // 0x20(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                        Pad_44A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x1A0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStreamingLevelProxyActor*             ReturnValue;                                       // 0x200(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix;  // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x218(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                       CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue; // 0x220(0x20)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_StreamingLevelProxy_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ReadPOIDistribution
struct UBP_RuntimeRealmSystemComponent_C_ReadPOIDistribution_Params
{
public:
	class UPersistedRealmConfig*                 Config;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GeneratePOIDistributionFromKey_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.PublishPOISeed
struct UBP_RuntimeRealmSystemComponent_C_PublishPOISeed_Params
{
public:
	class FString                                CallFunc_GetPoiDistributionKey_ReturnValue;        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPOIDistributionHash_ReturnValue;       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameStateBase*                     CallFunc_GetNWXGameStateBase_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.MakeNewPOIDistribution
struct UBP_RuntimeRealmSystemComponent_C_MakeNewPOIDistribution_Params
{
public:
	bool                                         CallFunc_ReadTemporalConfig_Result;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GeneratePOIDistributionFromKey_ReturnValue; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GeneratePOIDistribution_ReturnValue;      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetSeed
struct UBP_RuntimeRealmSystemComponent_C_GetSeed_Params
{
public:
	int32                                        Seed;                                              // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameStateBase*                     CallFunc_GetNWXGameStateBase_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.RandomizeProfileInteger
struct UBP_RuntimeRealmSystemComponent_C_RandomizeProfileInteger_Params
{
public:
	int32                                        RandMax;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Output;                                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetRealmPersistenceObject
struct UBP_RuntimeRealmSystemComponent_C_GetRealmPersistenceObject_Params
{
public:
	class UPersistedRealmConfig*                 AsPersistedRealmConfig;                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameStateBase*                     CallFunc_GetGameState_GameState;                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       K2Node_DynamicCast_AsBP_Game_State;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPersistenceObjectByKey_bSuccess;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4510[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetPersistenceObjectByKey_PersistedObject; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPersistedRealmConfig*                 K2Node_DynamicCast_AsPersisted_Realm_Config;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.CreatePersistenceObject
struct UBP_RuntimeRealmSystemComponent_C_CreatePersistenceObject_Params
{
public:
	class UPersistedRealmConfig*                 PersistenceObject;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPOIDistributionHash_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPoiDistributionKey_ReturnValue;        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UPersistedRealmConfig*                 CallFunc_SpawnObject_ReturnValue;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnStreamingLevel
struct UBP_RuntimeRealmSystemComponent_C_SpawnStreamingLevel_Params
{
public:
	struct FPOIStreamingLevelDefinition          POIData;                                           // 0x0(0x178)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Location;                                          // 0x178(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x190(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AStreamingLevelProxyActor*             ReturnValue;                                       // 0x1A8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Tags;                                              // 0x1B0(0x20)(Edit, BlueprintVisible)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1D0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                       CallFunc_Conv_SoftLevelPathToSoftObjectPath_ReturnValue; // 0x238(0x20)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_StreamingLevelProxy_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4560[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUniqueStreamingLevelPrefix_OutPrefix;  // 0x268(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Profile_Component_Randomizer
struct UBP_RuntimeRealmSystemComponent_C_Profile_Component_Randomizer_Params
{
public:
	int32                                        CelestialType_Max;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NebulaBrightness_Max;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NebulaColour_Max;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingColour_Max;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RingTile_Max;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CloudIndex_Max;                                    // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonSaturation_Max;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonColour_Max;                                    // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonType_Max;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MoonVis_Max;                                       // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Season_Max;                                        // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ColorRow_Max;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output;           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_1;         // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue_1;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomizeProfileInteger_Output_2;         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_3;         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_4;         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_5;         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_6;         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_7;         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_8;         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_9;         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_10;        // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomizeProfileInteger_Output_11;        // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_Profile_Component_Randomize        K2Node_MakeStruct_S_Profile_Component_Randomize;   // 0x70(0x74)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SimulationMonitorComponent_C*      CallFunc_GetComponentByClass_ReturnValue;          // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.GetPOITags
struct UBP_RuntimeRealmSystemComponent_C_GetPOITags_Params
{
public:
	struct FPOIStreamingLevelDefinition          POIData;                                           // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 POITags;                                           // 0x178(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 Tags;                                              // 0x198(0x20)(Edit, BlueprintVisible)
	bool                                         CallFunc_BiomeToTag_FoundMatch;                    // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_BiomeToTag_Tag;                           // 0x1BC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FootprintToTag_FoundMatch;                // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_FootprintToTag_Tag;                       // 0x1C8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnLevelPackageLoaded
struct UBP_RuntimeRealmSystemComponent_C_OnLevelPackageLoaded_Params
{
public:
	class AStreamingLevelProxyActor*             StreamingLevelProxy;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnPOIByName
struct UBP_RuntimeRealmSystemComponent_C_SpawnPOIByName_Params
{
public:
	class FName                                  POIRowName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4616[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStreamingLevelProxyActor*             StreamingLevelProxy;                               // 0x78(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundMatch;                                        // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_461E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPOIStreamingLevelDefinition          CallFunc_GetPOIDefinitionByName_POIDefinition;     // 0x88(0x178)(None)
	bool                                         CallFunc_GetPOIDefinitionByName_ReturnValue;       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4621[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x228(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x240(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStreamingLevelProxyActor*             CallFunc_SpawnStreamingLevel_ReturnValue;          // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x45A (0x45A - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.SpawnPlugByName
struct UBP_RuntimeRealmSystemComponent_C_SpawnPlugByName_Params
{
public:
	class FName                                  PlugRowName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  POIRowName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x70(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4649[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPOIPlugStreamingLevelDefinition      PlugDefinition;                                    // 0x78(0x70)(Edit, BlueprintVisible)
	struct FPOIStreamingLevelDefinition          LevelDefinition;                                   // 0xE8(0x178)(Edit, BlueprintVisible)
	struct FPOIStreamingLevelDefinition          CallFunc_GetPOIDefinitionByName_POIDefinition;     // 0x260(0x178)(None)
	bool                                         CallFunc_GetPOIDefinitionByName_ReturnValue;       // 0x3D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_464C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStreamingLevelProxyActor*             CallFunc_SpawnStreamingLevelFromPath_ReturnValue;  // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPOIPlugStreamingLevelDefinition      CallFunc_GetPlugDefinitionByName_PlugDefinition;   // 0x3E8(0x70)(None)
	bool                                         CallFunc_GetPlugDefinitionByName_ReturnValue;      // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.DoesBiomeMatch
struct UBP_RuntimeRealmSystemComponent_C_DoesBiomeMatch_Params
{
public:
	TArray<enum class EBiomeID>                  BiomesAllowed;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         DoesMatch;                                         // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBiomeID                          Temp_byte_Variable;                                // 0x11(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ChooseRealmProfile
struct UBP_RuntimeRealmSystemComponent_C_ChooseRealmProfile_Params
{
public:
	int32                                        RealmProfileIndex;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_467F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                ValidRealmIndices;                                 // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        CurrentProfileIndex;                               // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSeed_Seed;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                         CallFunc_MakeRandomStream_ReturnValue;             // 0x28(0x8)(ZeroConstructor, NoDestructor)
	class UBP_SimulationMonitorComponent_C*      CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerFromStream_ReturnValue;      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.POIDataToString
struct UBP_RuntimeRealmSystemComponent_C_POIDataToString_Params
{
public:
	struct FPOIData                              POIData;                                           // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class FString                                ReturnValue;                                       // 0x50(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x80(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x98(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB0(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x100(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x150(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x160(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ApplyConfigFlags
struct UBP_RuntimeRealmSystemComponent_C_ApplyConfigFlags_Params
{
public:
	class ABP_GameState_C*                       GameState;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPersistedRealmConfig*                 PersistenceObject;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameStateBase*                     CallFunc_GetNWXGameStateBase_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameStateBase*                     CallFunc_GetNWXGameStateBase_ReturnValue_1;        // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPersistedRealmConfig*                 CallFunc_CreatePersistenceObject_PersistenceObject; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetPersistenceObjectByKey_bSuccess;       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPersistenceObjectByKey_bSuccess;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetPersistenceObjectByKey_PersistedObject; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       K2Node_DynamicCast_AsBP_Game_State;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPersistedRealmConfig*                 K2Node_DynamicCast_AsPersisted_Realm_Config;       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.Multicast_DisplayPOIList
struct UBP_RuntimeRealmSystemComponent_C_Multicast_DisplayPOIList_Params
{
public:
	TArray<class FString>                        POIList;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.OnRealmSettingsReady
struct UBP_RuntimeRealmSystemComponent_C_OnRealmSettingsReady_Params
{
public:
	struct FRealmSettings                        RealmSettings;                                     // 0x0(0x40)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x14C (0x14C - 0x0)
// Function BP_RuntimeRealmSystemComponent.BP_RuntimeRealmSystemComponent_C.ExecuteUbergraph_BP_RuntimeRealmSystemComponent
struct UBP_RuntimeRealmSystemComponent_C_ExecuteUbergraph_BP_RuntimeRealmSystemComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWorldPersistenceSubsystem*            CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTrackingRunningWorld_ReturnValue;       // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4759[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_CustomEvent_POIList;                        // 0x20(0x10)(ConstParm, ReferenceParm)
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTestRealm_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_475C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXGameStateBase*                     CallFunc_GetNWXGameStateBase_ReturnValue;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_475E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4760[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4761[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAutomatedTestsRunning_ReturnValue;     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4765[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IRealmSettingsProvider> K2Node_DynamicCast_AsRealm_Settings_Provider;      // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRealmSettings                        K2Node_CustomEvent_RealmSettings;                  // 0x90(0x40)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0xF0(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXWorldSettings*                     CallFunc_GetWorldSettings_ReturnValue_1;           // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URealmSettingsProcessor*               CallFunc_GetRealmSettingsProcessor_Processor;      // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRealmSettingsProcessor_ProcessorFound; // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4771[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput; // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IRealmSettingsProvider> CallFunc_UnbindEventFrom_RealmSettingsChanged_self_CastInput_1; // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x138(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


