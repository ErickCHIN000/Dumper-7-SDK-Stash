#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C
// (None)

class UClass* UWBP_RadialButton_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadialButton_Ammo_C");

	return Clss;
}


// WBP_RadialButton_Ammo_C WBP_RadialButton_Ammo.Default__WBP_RadialButton_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadialButton_Ammo_C* UWBP_RadialButton_Ammo_C::GetDefaultObj()
{
	static class UWBP_RadialButton_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadialButton_Ammo_C*>(UWBP_RadialButton_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.InitializeDesignerPreview
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::InitializeDesignerPreview(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "InitializeDesignerPreview");

	Params::UWBP_RadialButton_Ammo_C_InitializeDesignerPreview_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.OnButtonUnHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RadialButton_Ammo_C::OnButtonUnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "OnButtonUnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.OnButtonHovered
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_HoverStartEventTag_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRadialMenuInterface>K2Node_DynamicCast_AsRadial_Menu_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::OnButtonHovered(bool Temp_bool_Variable, const struct FGameplayTag& CallFunc_HoverStartEventTag_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "OnButtonHovered");

	Params::UWBP_RadialButton_Ammo_C_OnButtonHovered_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HoverStartEventTag_ReturnValue = CallFunc_HoverStartEventTag_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadial_Menu_Interface = K2Node_DynamicCast_AsRadial_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEnabled_ReturnValue = CallFunc_IsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.CreateTooltip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::CreateTooltip(class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "CreateTooltip");

	Params::UWBP_RadialButton_Ammo_C_CreateTooltip_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.CreateAmmoGridEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_sw_GridEntryItem_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AngleToVector_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAmmoRadialMenuEntry*        K2Node_DynamicCast_AsAmmo_Radial_Menu_Entry                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::CreateAmmoGridEntry(class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_AngleToVector_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UAmmoRadialMenuEntry* K2Node_DynamicCast_AsAmmo_Radial_Menu_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "CreateAmmoGridEntry");

	Params::UWBP_RadialButton_Ammo_C_CreateAmmoGridEntry_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AngleToVector_ReturnValue = CallFunc_AngleToVector_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAmmo_Radial_Menu_Entry = K2Node_DynamicCast_AsAmmo_Radial_Menu_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.CreateButtonMaterial
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 NewLocalVar                                                      (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::CreateButtonMaterial(const struct FSlateColor& NewLocalVar, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "CreateButtonMaterial");

	Params::UWBP_RadialButton_Ammo_C_CreateButtonMaterial_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RadialButton_Ammo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "PreConstruct");

	Params::UWBP_RadialButton_Ammo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialButton_Ammo.WBP_RadialButton_Ammo_C.ExecuteUbergraph_WBP_RadialButton_Ammo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialButton_Ammo_C::ExecuteUbergraph_WBP_RadialButton_Ammo(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialButton_Ammo_C", "ExecuteUbergraph_WBP_RadialButton_Ammo");

	Params::UWBP_RadialButton_Ammo_C_ExecuteUbergraph_WBP_RadialButton_Ammo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


