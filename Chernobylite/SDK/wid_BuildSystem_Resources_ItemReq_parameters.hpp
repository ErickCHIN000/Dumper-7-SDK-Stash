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

// 0x3C8 (0x3C8 - 0x0)
// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.FetchPowerData
struct UWid_BuildSystem_Resources_ItemReq_C_FetchPowerData_Params
{
public:
	struct FBuildEntryInternal                   EntityInfo;                                        // 0x0(0x190)(Edit, BlueprintVisible)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x190(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x1B8(0x28)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_159A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_PowerManagmentCanAdd_ReturnValue;         // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_159F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x218(0x18)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBuildEntryInternal                   CallFunc_BuildSystemGetEntityInfo_ReturnValue;     // 0x238(0x190)(None)
};

// 0x3 (0x3 - 0x0)
// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.ConvertResourceToItemEnum
struct UWid_BuildSystem_Resources_ItemReq_C_ConvertResourceToItemEnum_Params
{
public:
	enum class EResourceType                     Res;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ItemNames                    NewParam;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x390 (0x390 - 0x0)
// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.Update
struct UWid_BuildSystem_Resources_ItemReq_C_Update_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     CurrentResourceType;                               // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1636[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBuildEntryInternal                   EntityInfo;                                        // 0x10(0x190)(Edit, BlueprintVisible)
	TArray<struct FSt_ItemByEnumAndCount>        ResourcesCost;                                     // 0x1A0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ItemNames                    CallFunc_ConvertResourceToItemEnum_NewParam;       // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1649[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBuildEntryInternal                   CallFunc_BuildSystemGetEntityInfo_ReturnValue;     // 0x1C0(0x190)(None)
	float                                        CallFunc_Map_Find_Value;                           // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1653[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1657[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EResourceType>             K2Node_MakeArray_Array;                            // 0x360(0x10)(ReferenceParm)
	struct FSt_ItemByEnumAndCount                K2Node_MakeStruct_st_ItemByEnumAndCount;           // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     CallFunc_Array_Get_Item;                           // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_165F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x37C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_BuildSystem_Resources_ItemReq.wid_BuildSystem_Resources_ItemReq_C.ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq
struct UWid_BuildSystem_Resources_ItemReq_C_ExecuteUbergraph_wid_BuildSystem_Resources_ItemReq_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


