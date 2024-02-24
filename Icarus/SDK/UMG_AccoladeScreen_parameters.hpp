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

// 0x24D (0x24D - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.InitAccoladeLists
struct UUMG_AccoladeScreen_C_InitAccoladeLists_Params
{
public:
	TArray<struct FAccoladesRowHandle>           Array;                                             // 0x0(0x10)(Edit, BlueprintVisible)
	TMap<struct FPlayerAccoladeCategoriesEnum, struct FFAccoladeArrayStruct> AccoladeMap;                                       // 0x10(0x50)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAccoladesEnum                        CallFunc_IntToStruct_ReturnValue;                  // 0x68(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAccoladesRowHandle                   CallFunc_StructToRowHandle_ReturnValue;            // 0x7C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAccoladeData                         CallFunc_GetAccoladesStruct_Accolades;             // 0x98(0x100)(None)
	enum class EValid                            CallFunc_GetAccoladesStruct_Paths;                 // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_AccoladeList_C*                   CallFunc_Create_ReturnValue;                       // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFAccoladeArrayStruct                 K2Node_MakeStruct_FAccoladeArrayStruct;            // 0x1A8(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2134[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerAccoladeCategoriesEnum         CallFunc_IntToStruct_ReturnValue_1;                // 0x1C8(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerAccoladeCategoriesRowHandle    CallFunc_StructToRowHandle_ReturnValue_1;          // 0x1DC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2155[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerAccoladeCategoriesEnum         CallFunc_RowHandleToStruct_ReturnValue;            // 0x1F8(0x10)(HasGetValueTypeHash)
	struct FFAccoladeArrayStruct                 CallFunc_Map_Find_Value;                           // 0x208(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2161[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFAccoladeArrayStruct                 CallFunc_Map_Find_Value_1;                         // 0x220(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_216A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NumRows_ReturnValue_1;                    // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x24C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.PreConstruct
struct UUMG_AccoladeScreen_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.Tick
struct UUMG_AccoladeScreen_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_MedalsButton_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_HuntingButton_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_SurvivalButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_ConstructionButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.CustomEvent_0
struct UUMG_AccoladeScreen_C_CustomEvent_0_Params
{
public:
	struct FAccoladesRowHandle                   Accolade;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_SurvivalButton_1_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature
struct UUMG_AccoladeScreen_C_BndEvt__UMG_AccoladeScreen_AchievementButton_K2Node_ComponentBoundEvent_5_Toggled__DelegateSignature_Params
{
public:
	class UUMG_ToggleButtonBase_C*               ToggleButton;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function UMG_AccoladeScreen.UMG_AccoladeScreen_C.ExecuteUbergraph_UMG_AccoladeScreen
struct UUMG_AccoladeScreen_C_ExecuteUbergraph_UMG_AccoladeScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2508[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerAccoladeCategoriesEnum         CallFunc_IntToStruct_ReturnValue;                  // 0x18(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerAccoladeCategoriesRowHandle    CallFunc_StructToRowHandle_ReturnValue;            // 0x2C(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2528[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_AccoladeList_C*                   CallFunc_Create_ReturnValue;                       // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusOrchestrationSubsystem*         CallFunc_GetWorldSubsystem_ReturnValue;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAccoladeSubsystem*                    CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2556[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_NumRows_ReturnValue;                      // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x9C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_5;         // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_AccoladeList_C*                   CallFunc_Array_Get_Item;                           // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2587[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_4;         // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_3;         // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_2;         // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAccoladesRowHandle                   K2Node_CustomEvent_Accolade;                       // 0x108(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ToggleButtonBase_C*               K2Node_ComponentBoundEvent_ToggleButton_1;         // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


