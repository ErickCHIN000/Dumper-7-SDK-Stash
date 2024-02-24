#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RadialMenu_ImprovedItemIcon.UMG_RadialMenu_ImprovedItemIcon_C
// (None)

class UClass* UUMG_RadialMenu_ImprovedItemIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RadialMenu_ImprovedItemIcon_C");

	return Clss;
}


// UMG_RadialMenu_ImprovedItemIcon_C UMG_RadialMenu_ImprovedItemIcon.Default__UMG_RadialMenu_ImprovedItemIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RadialMenu_ImprovedItemIcon_C* UUMG_RadialMenu_ImprovedItemIcon_C::GetDefaultObj()
{
	static class UUMG_RadialMenu_ImprovedItemIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RadialMenu_ImprovedItemIcon_C*>(UUMG_RadialMenu_ImprovedItemIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RadialMenu_ImprovedItemIcon.UMG_RadialMenu_ImprovedItemIcon_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RadialMenu_ImprovedItemIcon_C::Initialise(const struct FItemData& ItemData, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RadialMenu_ImprovedItemIcon_C", "Initialise");

	Params::UUMG_RadialMenu_ImprovedItemIcon_C_Initialise_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


