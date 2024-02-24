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

// 0x8C (0x8C - 0x0)
// Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.CanUseItem
struct UBP_ItemManipulationComponent_C_CanUseItem_Params
{
public:
	class UInventory*                            SourceInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SourceLocation;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUsesEnum                             Use;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUseCondition                         UseCondition;                                      // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AIcarusPlayerCharacter*                Target;                                            // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECanUseItemResult                 ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUse_ReturnValue;                       // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchRowEnum_CmpSuccess;                   // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanRepairItem_ReturnValue;                // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECanUseItemResult                 CallFunc_CanUseItem_ReturnValue;                   // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E76 (0x2E76 - 0x0)
// Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.UseItem
struct UBP_ItemManipulationComponent_C_UseItem_Params
{
public:
	class UInventory*                            SourceInventory;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SourceLocation;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUsesEnum                             Use;                                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                Target;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemConsumed;                                      // 0x28(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x218(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               TargetPlayerController;                            // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             NewItem;                                           // 0x228(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        ConsumeCount;                                      // 0x418(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             ConsumedItem;                                      // 0x420(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FItemData                             CallFunc_UseItem_ItemConsumed;                     // 0x610(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_UseItem_ReturnValue;                      // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchRowEnum_CmpSuccess;                   // 0x801(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F72[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Temp_wildcard_Variable;                            // 0x808(0x1F0)(ContainsInstancedReference)
	int32                                        Temp_int_Variable;                                 // 0x9F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x9FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths;               // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F7F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_1;                               // 0xA04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             Temp_wildcard_Variable_1;                          // 0xA08(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xBF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0xBFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xC00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_1;             // 0xC04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xC05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F9E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Temp_wildcard_Variable_2;                          // 0xC08(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xDF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_3;                               // 0xDFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xE04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_2;             // 0xE09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xE0A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xE0B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FB7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Temp_wildcard_Variable_3;                          // 0xE10(0x1F0)(ContainsInstancedReference)
	int32                                        Temp_int_Variable_4;                               // 0x1000(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x1004(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x1008(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x100C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_3;             // 0x1010(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x1011(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FDA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             Temp_wildcard_Variable_4;                          // 0x1018(0x1F0)(ContainsInstancedReference)
	int32                                        Temp_int_Variable_6;                               // 0x1208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x120C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_4;             // 0x1210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x1211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x1212(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1213(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x1218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemDynamicData>              K2Node_MakeArray_Array;                            // 0x1220(0x10)(ReferenceParm)
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0x1230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x1238(0x1F0)(ContainsInstancedReference)
	struct FItemData                             CallFunc_CreateItem_ReturnValue;                   // 0x1428(0x1F0)(ContainsInstancedReference)
	int32                                        Temp_int_Variable_7;                               // 0x1618(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x1620(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x1810(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x1814(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x1818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x181C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ConsumeItem_ReturnValue;                  // 0x1820(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2001[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x1824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x1828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x182C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_5;             // 0x1830(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0x1831(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_201B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed;                 // 0x1838(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_1;                // 0x1A28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2023[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_1;                    // 0x1A30(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue;            // 0x1C20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths;               // 0x1C24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x1C25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_202E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed_1;               // 0x1C28(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_2;                // 0x1E18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2037[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_2;                    // 0x1E20(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue_1;          // 0x2010(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths_1;             // 0x2014(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x2015(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2016(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_203E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed_2;               // 0x2018(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_3;                // 0x2208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2045[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_3;                    // 0x2210(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue_2;          // 0x2400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths_2;             // 0x2404(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x2405(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2052[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_8;                               // 0x2408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x240C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x2410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2063[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed_3;               // 0x2418(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_4;                // 0x2608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_4;                    // 0x2610(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue_3;          // 0x2800(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths_3;             // 0x2804(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0x2805(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x2806(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2807(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x2808(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x2809(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue;      // 0x2810(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxFood_ReturnValue;                   // 0x2818(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFood_ReturnValue;                      // 0x281C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxWater_ReturnValue;                  // 0x2820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2824(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetWater_ReturnValue;                     // 0x2828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x282C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed_4;               // 0x2830(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_5;                // 0x2A20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue_5;                    // 0x2A28(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_GetItemPropertyValue_IntValue_4;          // 0x2C18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_GetItemPropertyValue_Paths_4;             // 0x2C1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_10;                   // 0x2C1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue_1;    // 0x2C20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x2C28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMaxOxygen_ReturnValue;                 // 0x2C2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2C30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetOxygen_ReturnValue;                    // 0x2C34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2C38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2102[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable_9;                               // 0x2C3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x2C40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x2C44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x2C45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_211C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue_2;    // 0x2C48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxWater_ReturnValue_1;                // 0x2C50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2127[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue_3;    // 0x2C58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetWater_ReturnValue_1;                   // 0x2C60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxFood_ReturnValue_1;                 // 0x2C64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x2C68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_213C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFood_ReturnValue_1;                    // 0x2C6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x2C70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x2C71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x2C72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x2C73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_214B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_ConsumeItem_ItemConsumed_5;               // 0x2C78(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_ConsumeItem_ReturnValue_6;                // 0x2E68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESetDataSuccess                   CallFunc_SetItemPropertyValue_Paths_6;             // 0x2E69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_11;                   // 0x2E6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PlaceItem_ReturnValue;                    // 0x2E6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2E6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_218B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_StartStaminaAction_ReturnValue;           // 0x2E70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesImplementInterface_ReturnValue;       // 0x2E74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RepairItem_ReturnValue;                   // 0x2E75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


