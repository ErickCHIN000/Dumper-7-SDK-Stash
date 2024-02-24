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

// 0x10 (0x10 - 0x0)
// Function BPFL_Items_Traits.BPFL_Items_Traits_C.GetCharacteristicClass
struct UBPFL_Items_Traits_C_GetCharacteristicClass_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2D0 (0x2D0 - 0x0)
// Function BPFL_Items_Traits.BPFL_Items_Traits_C.GetAllCharacteristics
struct UBPFL_Items_Traits_C_GetAllCharacteristics_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UCharacteristicDataAsset*>      ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm)
	TArray<class UCharacteristicDataAsset*>      Characteristics;                                   // 0x18(0x10)(Edit, BlueprintVisible)
	TSet<struct FTopLevelAssetPath>              Temp_struct_Variable;                              // 0x28(0x50)(ConstParm)
	TArray<struct FTopLevelAssetPath>            Temp_struct_Variable_1;                            // 0x78(0x10)(ConstParm, ReferenceParm)
	TArray<struct FSoftObjectPath>               Temp_struct_Variable_2;                            // 0x88(0x10)(ConstParm, ReferenceParm)
	TArray<class FName>                          Temp_name_Variable;                                // 0x98(0x10)(ConstParm, ReferenceParm)
	TArray<class FName>                          Temp_name_Variable_1;                              // 0xA8(0x10)(ConstParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            Temp_name_Variable_2;                              // 0xC8(0x50)(ConstParm)
	class UClass*                                CallFunc_GetCharacteristicClass_ReturnValue;       // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetClassDisplayName_ReturnValue;          // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x138(0x10)(ConstParm, ReferenceParm)
	struct FARFilter                             CallFunc_MakeARFilter_ReturnValue;                 // 0x148(0x150)(None)
	TArray<class UObject*>                       CallFunc_GetAllAssetsByFilter_Objects;             // 0x298(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2700[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacteristicDataAsset*              K2Node_DynamicCast_AsCharacteristic_Data_Asset;    // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2721[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


