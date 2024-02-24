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

// 0x49 (0x49 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Find Discovery Location Index
struct ABP_MapLocationManager_C_Find_Discovery_Location_Index_Params
{
public:
	struct FGuid                                 Discovery_Location_ID;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDiscoveryLocation                    CallFunc_Array_Get_Item;                           // 0x24(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_DiscoveryLocation_ID;               // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Discovery Locations
struct ABP_MapLocationManager_C_Get_Discovery_Locations_Params
{
public:
	TArray<struct FDiscoveryLocation>            Discovery_Locations;                               // 0x0(0x10)(Parm, OutParm)
};

// 0x25 (0x25 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Discovery Location
struct ABP_MapLocationManager_C_Get_Discovery_Location_Params
{
public:
	struct FGuid                                 Discovery_Location_ID;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDiscoveryLocation                    DIscovery_Location;                                // 0x10(0x10)(Parm, OutParm, NoDestructor)
	int32                                        CallFunc_Find_Discovery_Location_Index_Index;      // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Remove Discovery Location
struct ABP_MapLocationManager_C_Remove_Discovery_Location_Params
{
public:
	struct FGuid                                 Discovery_Location_ID;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Find_Discovery_Location_Index_Index;      // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Add Discovery Location
struct ABP_MapLocationManager_C_Add_Discovery_Location_Params
{
public:
	struct FDiscoveryLocation                    DIscovery_Location;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5320[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_DiscoveryLocation_ID;               // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Find_Fast_Travel_Location_Index_Index;    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5333[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x103 (0x103 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Find Fast Travel Location Index
struct ABP_MapLocationManager_C_Find_Fast_Travel_Location_Index_Params
{
public:
	struct FGuid                                 Fast_Travel_Location_ID;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FastTravelLocation                 CallFunc_Array_Get_Item;                           // 0x20(0x69)(HasGetValueTypeHash)
	uint8                                        Pad_53E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_Break_FastTravelLocation_ID;              // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Break_FastTravelLocation_World_Location;  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Break_FastTravelLocation_Rotation;        // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Break_FastTravelLocation_Location_Name;   // 0xD8(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Break_FastTravelLocation_Fast_Travel_Type; // 0xF0(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State; // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x102(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Fast Travel Locations
struct ABP_MapLocationManager_C_Get_Fast_Travel_Locations_Params
{
public:
	TArray<struct FS_FastTravelLocation>         Fast_Travel_Locations;                             // 0x0(0x10)(Parm, OutParm)
};

// 0x85 (0x85 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Get Fast Travel Location
struct ABP_MapLocationManager_C_Get_Fast_Travel_Location_Params
{
public:
	struct FGuid                                 Fast_Travel_Location_ID;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_FastTravelLocation                 Fast_Travel_Location;                              // 0x10(0x69)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_5478[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Find_Fast_Travel_Location_Index_Index;    // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x17 (0x17 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Remove Fast Travel Location
struct ABP_MapLocationManager_C_Remove_Fast_Travel_Location_Params
{
public:
	struct FGuid                                 Fast_Travel_Location_ID;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Find_Fast_Travel_Location_Index_Index;    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x272 (0x272 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Update Fast Travel Location Name
struct ABP_MapLocationManager_C_Update_Fast_Travel_Location_Name_Params
{
public:
	struct FGuid                                 Location_ID;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  New_Location_Name;                                 // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FS_FastTravelLocation                 LocationToUpdate;                                  // 0x28(0x69)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_5579[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5589[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_FastTravelLocation_ID;              // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Break_FastTravelLocation_World_Location;  // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Break_FastTravelLocation_Rotation;        // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Break_FastTravelLocation_Location_Name;   // 0xE8(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Break_FastTravelLocation_Fast_Travel_Type; // 0x100(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State; // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_559B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_FastTravelLocation                 CallFunc_Make_FastTravelLocation_Fast_Travel_Location; // 0x118(0x69)(HasGetValueTypeHash)
	uint8                                        Pad_55A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_FastTravelLocation                 CallFunc_Array_Get_Item;                           // 0x190(0x69)(HasGetValueTypeHash)
	uint8                                        Pad_55AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_FastTravelLocation_ID_1;            // 0x204(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Break_FastTravelLocation_World_Location_1; // 0x218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Break_FastTravelLocation_Rotation_1;      // 0x230(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Break_FastTravelLocation_Location_Name_1; // 0x248(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1; // 0x260(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1; // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E8 (0x2E8 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.Add Fast Travel Location
struct ABP_MapLocationManager_C_Add_Fast_Travel_Location_Params
{
public:
	struct FS_FastTravelLocation                 Fast_Travel_Location;                              // 0x0(0x69)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_56B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         NewLocalVar_0;                                     // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_FastTravelLocation_ID;              // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Break_FastTravelLocation_World_Location;  // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Break_FastTravelLocation_Rotation;        // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Break_FastTravelLocation_Location_Name;   // 0xB8(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Break_FastTravelLocation_Fast_Travel_Type; // 0xD0(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 CallFunc_Break_FastTravelLocation_ID_1;            // 0xE4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Break_FastTravelLocation_World_Location_1; // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Break_FastTravelLocation_Rotation_1;      // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Break_FastTravelLocation_Location_Name_1; // 0x128(0x18)(None)
	struct FDataTableRowHandle                   CallFunc_Break_FastTravelLocation_Fast_Travel_Type_1; // 0x140(0x10)(NoDestructor, HasGetValueTypeHash)
	enum class E_FastTravelLocationState         CallFunc_Break_FastTravelLocation_Initial_Fast_Travel_Location_State_1; // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue_1;          // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x178(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x190(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A8(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1F8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x248(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x258(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x268(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x280(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue_2;          // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Find_Fast_Travel_Location_Index_Index;    // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5703[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.AddFastTravelLocationRPC
struct ABP_MapLocationManager_C_AddFastTravelLocationRPC_Params
{
public:
	struct FS_FastTravelLocation                 Fast_Travel_Location;                              // 0x0(0x69)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_5752[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.RemoveFastTravelLocationRPC
struct ABP_MapLocationManager_C_RemoveFastTravelLocationRPC_Params
{
public:
	struct FGuid                                 Fast_Travel_Location_ID;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.AddDiscoveryLocationRPC
struct ABP_MapLocationManager_C_AddDiscoveryLocationRPC_Params
{
public:
	struct FDiscoveryLocation                    DIscovery_Location;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.RemoveDiscoveryLocationRPC
struct ABP_MapLocationManager_C_RemoveDiscoveryLocationRPC_Params
{
public:
	struct FGuid                                 Discovery_Location_ID;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.UpdateFastTravelLocationRPC
struct ABP_MapLocationManager_C_UpdateFastTravelLocationRPC_Params
{
public:
	struct FGuid                                 Location_ID;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  New_Location_Name;                                 // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.ExecuteUbergraph_BP_MapLocationManager
struct ABP_MapLocationManager_C_ExecuteUbergraph_BP_MapLocationManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 K2Node_CustomEvent_Location_ID;                    // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5810[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_New_Location_Name;              // 0x18(0x18)(None)
	struct FS_FastTravelLocation                 K2Node_CustomEvent_Fast_Travel_Location;           // 0x30(0x69)(HasGetValueTypeHash)
	uint8                                        Pad_581A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 K2Node_CustomEvent_Fast_Travel_Location_ID;        // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDiscoveryLocation                    K2Node_CustomEvent_Discovery_Location;             // 0xB0(0x10)(NoDestructor)
	struct FGuid                                 K2Node_CustomEvent_Discovery_Location_ID;          // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.OnDiscoveryLocationsUpdatedDelegate__DelegateSignature
struct ABP_MapLocationManager_C_OnDiscoveryLocationsUpdatedDelegate__DelegateSignature_Params
{
public:
	TArray<struct FDiscoveryLocation>            Discovery_Locations;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_MapLocationManager.BP_MapLocationManager_C.OnFastTravelLocationsUpdatedDelegate__DelegateSignature
struct ABP_MapLocationManager_C_OnFastTravelLocationsUpdatedDelegate__DelegateSignature_Params
{
public:
	TArray<struct FS_FastTravelLocation>         Fast_Travel_Locations;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}


