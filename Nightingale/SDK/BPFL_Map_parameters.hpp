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

// 0x141 (0x141 - 0x0)
// Function BPFL_Map.BPFL_Map_C.GetShowWaypointInWorldFromType
struct UBPFL_Map_C_GetShowWaypointInWorldFromType_Params
{
public:
	struct FDataTableRowHandle                   WaypointType;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowInWorld;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapWaypointInfo                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x20(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BPFL_Map.BPFL_Map_C.GetMapLocationManager
struct UBPFL_Map_C_GetMapLocationManager_Params
{
public:
	class AGameModeBase*                         GameMode;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_MapLocationManager_C*              MapLocationManager;                                // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXGameModeBase*                      K2Node_DynamicCast_AsNWXGame_Mode_Base;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MapLocationManager_C*              CallFunc_GetManager_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BPFL_Map.BPFL_Map_C.BreakUIMapTable
struct UBPFL_Map_C_BreakUIMapTable_Params
{
public:
	struct FS_UI_MapTable                        S_UI_MapTable;                                     // 0x0(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Map_Level_Name;                                    // 0x70(0x18)(Parm, OutParm)
	class FText                                  Level_Description;                                 // 0x88(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             Map_Texture;                                       // 0xA0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	enum class E_MapRotation                     Map_Rotation_Override;                             // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Maximum_Realm_Height;                              // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Get Distance Text From Waypoint
struct UBPFL_Map_C_Get_Distance_Text_From_Waypoint_Params
{
public:
	struct FDataTableRowHandle                   Waypoint_Type;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceTo;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F67[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F89[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerController_C*                K2Node_DynamicCast_AsBP_Player_Controller;         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F99[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MapTracker_C*                      CallFunc_GetMapTracker_MapTrackerComponent;        // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_LevelWaypoints                     CallFunc_Array_Get_Item;                           // 0xA8(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_WaypointInformation                CallFunc_Array_Get_Item_1;                         // 0xD0(0x68)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Initialize Discovery Component Sphere Overlap
struct UBPFL_Map_C_Initialize_Discovery_Component_Sphere_Overlap_Params
{
public:
	class UBP_MapExplorationComponent_C*         Discovery_Component;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere_Collision;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeLiteralDouble_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x50(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_608A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Initialize_Sphere_Overlap_Radius_ImplicitCast; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast; // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_InitialStartDelayVariance_ImplicitCast; // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Make DiscoveryInformation
struct UBPFL_Map_C_Make_DiscoveryInformation_Params
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFDiscoveryLocationState          Discovery_Location_State;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDiscoveryInformation                 Discovery_Information;                             // 0x20(0x14)(Parm, OutParm, NoDestructor)
	struct FDiscoveryInformation                 K2Node_MakeStruct_DiscoveryInformation;            // 0x34(0x14)(NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break DiscoveryInformation
struct UBPFL_Map_C_Break_DiscoveryInformation_Params
{
public:
	struct FDiscoveryInformation                 Discovery_Information;                             // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_6174[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 ID;                                                // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFDiscoveryLocationState          Discovery_Location_State;                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Make LevelDiscoveryLocation
struct UBPFL_Map_C_Make_LevelDiscoveryLocation_Params
{
public:
	class FString                                Level_Name;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FDiscoveryInformation>         Discovery_Location_Information;                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLevelDiscoveryLocation               Level_Discovery_Location_;                         // 0x28(0x20)(Parm, OutParm)
	struct FLevelDiscoveryLocation               K2Node_MakeStruct_LevelDiscoveryLocation;          // 0x48(0x20)(None)
};

// 0x48 (0x48 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break LevelDiscoveryLocation
struct UBPFL_Map_C_Break_LevelDiscoveryLocation_Params
{
public:
	struct FLevelDiscoveryLocation               Level_Discovery_Location_;                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Level_Name;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FDiscoveryInformation>         Discovery_Location_Information;                    // 0x38(0x10)(Parm, OutParm)
};

// 0x38 (0x38 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Make DiscoveryLocation
struct UBPFL_Map_C_Make_DiscoveryLocation_Params
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDiscoveryLocation                    DIscovery_Location;                                // 0x18(0x10)(Parm, OutParm, NoDestructor)
	struct FDiscoveryLocation                    K2Node_MakeStruct_DiscoveryLocation;               // 0x28(0x10)(NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break DiscoveryLocation
struct UBPFL_Map_C_Break_DiscoveryLocation_Params
{
public:
	struct FDiscoveryLocation                    DIscovery_Location;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 ID;                                                // 0x18(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Make FastTravelInformation
struct UBPFL_Map_C_Make_FastTravelInformation_Params
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         Fast_Travel_Location_State;                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_FastTravelInformation              S_FastTravelInformation;                           // 0x20(0x11)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_631B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_FastTravelInformation              K2Node_MakeStruct_S_FastTravelInformation;         // 0x34(0x11)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6325[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x31 (0x31 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break FastTravelInformation
struct UBPFL_Map_C_Break_FastTravelInformation_Params
{
public:
	struct FS_FastTravelInformation              S_FastTravelInformation;                           // 0x0(0x11)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 ID;                                                // 0x20(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         Fast_Travel_Location_State;                        // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function BPFL_Map.BPFL_Map_C.MakeLevelFastTravelLocation
struct UBPFL_Map_C_MakeLevelFastTravelLocation_Params
{
public:
	class FString                                Level_Name;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_FastTravelInformation>      Fast_Travel_Information;                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_LevelFastTravelLocation            S_LevelFastTravelLocation;                         // 0x28(0x20)(Parm, OutParm, HasGetValueTypeHash)
	struct FS_LevelFastTravelLocation            K2Node_MakeStruct_S_LevelFastTravelLocation;       // 0x48(0x20)(HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break LevelFastTravelLocation
struct UBPFL_Map_C_Break_LevelFastTravelLocation_Params
{
public:
	struct FS_LevelFastTravelLocation            S_LevelFastTravelLocation;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                Level_Name;                                        // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FS_FastTravelInformation>      Fast_Travel_Information;                           // 0x38(0x10)(Parm, OutParm)
};

// 0x168 (0x168 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Make FastTravelLocation
struct UBPFL_Map_C_Make_FastTravelLocation_Params
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               World_Location;                                    // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  Location_Name;                                     // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDataTableRowHandle                   Fast_Travel_Type;                                  // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         Initial_Fast_Travel_Location_State;                // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_654B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FS_FastTravelLocation                 Fast_Travel_Location;                              // 0x78(0x69)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_655B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDiscoveryLocation                    NewLocalVar_0;                                     // 0xE8(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FS_FastTravelLocation                 K2Node_MakeStruct_S_FastTravelLocation;            // 0xF8(0x69)(HasGetValueTypeHash)
	uint8                                        Pad_6562[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE1 (0xE1 - 0x0)
// Function BPFL_Map.BPFL_Map_C.Break FastTravelLocation
struct UBPFL_Map_C_Break_FastTravelLocation_Params
{
public:
	struct FS_FastTravelLocation                 Fast_Travel_Location;                              // 0x0(0x69)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_65C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 ID;                                                // 0x78(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               World_Location;                                    // 0x88(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xA0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  Location_Name;                                     // 0xB8(0x18)(Parm, OutParm)
	struct FDataTableRowHandle                   Fast_Travel_Type;                                  // 0xD0(0x10)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         Initial_Fast_Travel_Location_State;                // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


