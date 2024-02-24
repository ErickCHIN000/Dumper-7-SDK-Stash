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

// 0x38 (0x38 - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UppercaseMenuButton
struct UWid_pda_Map_Buttons_C_UppercaseMenuButton_Params
{
public:
	class UWid_MainMenu_Buttons_Entry_C*         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.UppercaseButtonLabel
struct UWid_pda_Map_Buttons_C_UppercaseButtonLabel_Params
{
public:
	class UWid_Inventory_Buttons_Entry_C*        Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x20(0x18)(None)
};

// 0x48 (0x48 - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.Update
struct UWid_pda_Map_Buttons_C_Update_Params
{
public:
	struct FStruct_Map_ButtonsInfo               Info;                                              // 0x0(0x2B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_1D8E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x30(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.PreConstruct
struct UWid_pda_Map_Buttons_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.Tick
struct UWid_pda_Map_Buttons_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function wid_pda_Map_Buttons.wid_pda_Map_Buttons_C.ExecuteUbergraph_wid_pda_Map_Buttons
struct UWid_pda_Map_Buttons_C_ExecuteUbergraph_wid_pda_Map_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Map_Button                    K2Node_MakeStruct_struct_Map_Button;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Map_Button                    K2Node_MakeStruct_struct_Map_Button_1;             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Map_Button                    K2Node_MakeStruct_struct_Map_Button_2;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Map_Button                    K2Node_MakeStruct_struct_Map_Button_3;             // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_Map_ButtonsInfo               K2Node_MakeStruct_struct_Map_ButtonsInfo;          // 0x8(0x2B)(UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1E7C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x3C(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


