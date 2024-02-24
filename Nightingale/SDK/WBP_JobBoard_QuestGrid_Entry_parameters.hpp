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

// 0x8 (0x8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.GetDefaultFocusWidget
struct UWBP_JobBoard_QuestGrid_Entry_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.SetSelected
struct UWBP_JobBoard_QuestGrid_Entry_C_SetSelected_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.PreConstruct
struct UWBP_JobBoard_QuestGrid_Entry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.OnAddedToFocusPath
struct UWBP_JobBoard_QuestGrid_Entry_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.OnRemovedFromFocusPath
struct UWBP_JobBoard_QuestGrid_Entry_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x210 (0x210 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry
struct UWBP_JobBoard_QuestGrid_Entry_C_ExecuteUbergraph_WBP_JobBoard_QuestGrid_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_2;                            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_3;                            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_4;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_5;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x60(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item;                           // 0xB0(0x60)(None)
	class FText                                  CallFunc_UI_Text_TruncationCheck_ReturnValue;      // 0x110(0x18)(None)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x128(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x130(0x8)(NoDestructor)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F5B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Contract_StateType              Temp_byte_Variable;                                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F63[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default_1;                           // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData; // 0x150(0x48)(None)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item_1;                         // 0x198(0x60)(None)
	class FText                                  CallFunc_UI_Text_TruncationCheck_ReturnValue_1;    // 0x1F8(0x18)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardShopOfferHovered__DelegateSignature
struct UWBP_JobBoard_QuestGrid_Entry_C_JobBoardShopOfferHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FA4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShopOfferPresentation                ShopOffer;                                         // 0x8(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardShopOfferSelected__DelegateSignature
struct UWBP_JobBoard_QuestGrid_Entry_C_JobBoardShopOfferSelected__DelegateSignature_Params
{
public:
	int32                                        GridIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShopOfferPresentation                ShopOffer;                                         // 0x8(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardQuestHovered__DelegateSignature
struct UWBP_JobBoard_QuestGrid_Entry_C_JobBoardQuestHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3002[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x10(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_JobBoard_QuestGrid_Entry.WBP_JobBoard_QuestGrid_Entry_C.JobBoardQuestSelected__DelegateSignature
struct UWBP_JobBoard_QuestGrid_Entry_C_JobBoardQuestSelected__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3017[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GridIndex;                                         // 0xB4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


