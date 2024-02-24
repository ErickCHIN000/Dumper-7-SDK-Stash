#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C
// (None)

class UClass* UWBP_RadialMenuButton_IconAndText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadialMenuButton_IconAndText_C");

	return Clss;
}


// WBP_RadialMenuButton_IconAndText_C WBP_RadialMenuButton_IconAndText.Default__WBP_RadialMenuButton_IconAndText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadialMenuButton_IconAndText_C* UWBP_RadialMenuButton_IconAndText_C::GetDefaultObj()
{
	static class UWBP_RadialMenuButton_IconAndText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadialMenuButton_IconAndText_C*>(UWBP_RadialMenuButton_IconAndText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.OnButtonUnHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RadialMenuButton_IconAndText_C::OnButtonUnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "OnButtonUnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.OnButtonHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRadialMenuInterface>K2Node_DynamicCast_AsRadial_Menu_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenuButton_IconAndText_C::OnButtonHovered(bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "OnButtonHovered");

	Params::UWBP_RadialMenuButton_IconAndText_C_OnButtonHovered_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadial_Menu_Interface = K2Node_DynamicCast_AsRadial_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEnabled_ReturnValue = CallFunc_IsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.SetButtonCosmetics
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class UTexture2D*                  Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRadialMenuInterface>K2Node_DynamicCast_AsRadial_Menu_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AngleToVector_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconTexture_ReturnValue                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRadialMenuInterface>K2Node_DynamicCast_AsRadial_Menu_Interface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetName_ReturnValue                                     (None)

void UWBP_RadialMenuButton_IconAndText_C::SetButtonCosmetics(class FText Temp_text_Variable, class UTexture2D* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_AngleToVector_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_GetName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "SetButtonCosmetics");

	Params::UWBP_RadialMenuButton_IconAndText_C_SetButtonCosmetics_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadial_Menu_Interface = K2Node_DynamicCast_AsRadial_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AngleToVector_ReturnValue = CallFunc_AngleToVector_ReturnValue;
	Parms.CallFunc_GetIconTexture_ReturnValue = CallFunc_GetIconTexture_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRadial_Menu_Interface_1 = K2Node_DynamicCast_AsRadial_Menu_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.CreateButtonMaterial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRadialMenuInterface>K2Node_DynamicCast_AsRadial_Menu_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabled_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenuButton_IconAndText_C::CreateButtonMaterial(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IRadialMenuInterface> K2Node_DynamicCast_AsRadial_Menu_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnabled_ReturnValue, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "CreateButtonMaterial");

	Params::UWBP_RadialMenuButton_IconAndText_C_CreateButtonMaterial_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadial_Menu_Interface = K2Node_DynamicCast_AsRadial_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEnabled_ReturnValue = CallFunc_IsEnabled_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.GetRadialMaterialBrush
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_RadialMenuButton_IconAndText_C::GetRadialMaterialBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "GetRadialMaterialBrush");

	Params::UWBP_RadialMenuButton_IconAndText_C_GetRadialMaterialBrush_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RadialMenuButton_IconAndText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RadialMenuButton_IconAndText.WBP_RadialMenuButton_IconAndText_C.ExecuteUbergraph_WBP_RadialMenuButton_IconAndText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadialMenuButton_IconAndText_C::ExecuteUbergraph_WBP_RadialMenuButton_IconAndText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadialMenuButton_IconAndText_C", "ExecuteUbergraph_WBP_RadialMenuButton_IconAndText");

	Params::UWBP_RadialMenuButton_IconAndText_C_ExecuteUbergraph_WBP_RadialMenuButton_IconAndText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


