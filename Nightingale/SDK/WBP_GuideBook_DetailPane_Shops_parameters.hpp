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
// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.OnExecuteCategoryOperation
struct UWBP_GuideBook_DetailPane_Shops_C_OnExecuteCategoryOperation_Params
{
public:
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntryShop*                 K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_960[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_ShopScreen_C*                     CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UShopDescriptorDataAsset*              CallFunc_GetLoadedShopDescriptor_ReturnValue;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.UpdateCosmetics
struct UWBP_GuideBook_DetailPane_Shops_C_UpdateCosmetics_Params
{
public:
	class FText                                  CallFunc_GetDescription_ReturnValue;               // 0x0(0x18)(None)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
struct UWBP_GuideBook_DetailPane_Shops_C_BndEvt__WBP_GuideBook_DetailPane_Shops_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_GuideBook_DetailPane_Shops.WBP_GuideBook_DetailPane_Shops_C.ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops
struct UWBP_GuideBook_DetailPane_Shops_C_ExecuteUbergraph_WBP_GuideBook_DetailPane_Shops_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


