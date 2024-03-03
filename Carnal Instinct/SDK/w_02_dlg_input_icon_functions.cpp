#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_02_dlg_input_icon.w_02_dlg_input_icon_C
// (None)

class UClass* UW_02_dlg_input_icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_02_dlg_input_icon_C");

	return Clss;
}


// w_02_dlg_input_icon_C w_02_dlg_input_icon.Default__w_02_dlg_input_icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_02_dlg_input_icon_C* UW_02_dlg_input_icon_C::GetDefaultObj()
{
	static class UW_02_dlg_input_icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_02_dlg_input_icon_C*>(UW_02_dlg_input_icon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_input_icon_C::Set_progress(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_input_icon_C", "set_progress");

	Params::UW_02_dlg_input_icon_C_Set_progress_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_icon_texture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Icon_texture                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Icon_text                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_input_icon_C::Set_icon_texture(class UTexture* Icon_texture, class FText Icon_text, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_input_icon_C", "set_icon_texture");

	Params::UW_02_dlg_input_icon_C_Set_icon_texture_Params Parms{};

	Parms.Icon_texture = Icon_texture;
	Parms.Icon_text = Icon_text;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_icon_visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show_icon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_02_dlg_input_icon_C::Set_icon_visibility(bool Show_icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_input_icon_C", "set_icon_visibility");

	Params::UW_02_dlg_input_icon_C_Set_icon_visibility_Params Parms{};

	Parms.Show_icon = Show_icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.ExecuteUbergraph_w_02_dlg_input_icon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_02_dlg_input_icon_C::ExecuteUbergraph_w_02_dlg_input_icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_02_dlg_input_icon_C", "ExecuteUbergraph_w_02_dlg_input_icon");

	Params::UW_02_dlg_input_icon_C_ExecuteUbergraph_w_02_dlg_input_icon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


