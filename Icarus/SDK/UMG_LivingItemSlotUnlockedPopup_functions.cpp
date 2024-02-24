#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LivingItemSlotUnlockedPopup.UMG_LivingItemSlotUnlockedPopup_C
// (None)

class UClass* UUMG_LivingItemSlotUnlockedPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LivingItemSlotUnlockedPopup_C");

	return Clss;
}


// UMG_LivingItemSlotUnlockedPopup_C UMG_LivingItemSlotUnlockedPopup.Default__UMG_LivingItemSlotUnlockedPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LivingItemSlotUnlockedPopup_C* UUMG_LivingItemSlotUnlockedPopup_C::GetDefaultObj()
{
	static class UUMG_LivingItemSlotUnlockedPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LivingItemSlotUnlockedPopup_C*>(UUMG_LivingItemSlotUnlockedPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LivingItemSlotUnlockedPopup.UMG_LivingItemSlotUnlockedPopup_C.PlayUnlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_LivingItemSlotUnlockedPopup_C::PlayUnlock(const struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LivingItemSlotUnlockedPopup_C", "PlayUnlock");

	Params::UUMG_LivingItemSlotUnlockedPopup_C_PlayUnlock_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LivingItemSlotUnlockedPopup.UMG_LivingItemSlotUnlockedPopup_C.ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_Item                                          (ContainsInstancedReference)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LivingItemSlotUnlockedPopup_C::ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FItemData& K2Node_CustomEvent_Item, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LivingItemSlotUnlockedPopup_C", "ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup");

	Params::UUMG_LivingItemSlotUnlockedPopup_C_ExecuteUbergraph_UMG_LivingItemSlotUnlockedPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


