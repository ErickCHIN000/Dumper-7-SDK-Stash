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

// 0x30 (0x30 - 0x0)
// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupRealmPowerLevel
struct UWBP_sw_ItemTooltip_AddressCard_C_SetupRealmPowerLevel_Params
{
public:
	class FText                                  AllRealmTags;                                      // 0x0(0x18)(Edit, BlueprintVisible)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0x58 (0x58 - 0x0)
// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupBiomeName
struct UWBP_sw_ItemTooltip_AddressCard_C_SetupBiomeName_Params
{
public:
	class UBiomeUIDataRegistry*                  BiomeUIData;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_325C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBiomeUIData                          CallFunc_TryGetBiomeUIData_OutData;                // 0x10(0x18)(None)
	enum class EGetResult                        CallFunc_TryGetBiomeUIData_OutBranches;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3260[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3266[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupRespitePlayerNames
struct UWBP_sw_ItemTooltip_AddressCard_C_SetupRespitePlayerNames_Params
{
public:
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_328A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.OnRespitePlayerNamesRetrieved
struct UWBP_sw_ItemTooltip_AddressCard_C_OnRespitePlayerNamesRetrieved_Params
{
public:
	struct FProfileNamesMapWrapper               Wrapper;                                           // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOnlineServiceStatus                  ServiceStatus;                                     // 0x50(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CombinedPlayerNames;                               // 0x68(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsSuccess_bIsSuccess;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x90(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FUniqueName                           CallFunc_Map_Find_Value;                           // 0xB8(0x20)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue; // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x110(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x128(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x178(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1D8(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard
struct UWBP_sw_ItemTooltip_AddressCard_C_ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


