#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C
// (None)

class UClass* UWid_MissionSelection_Avatar_Food_V3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MissionSelection_Avatar_Food_V3_C");

	return Clss;
}


// wid_MissionSelection_Avatar_Food_V3_C wid_MissionSelection_Avatar_Food_V3.Default__wid_MissionSelection_Avatar_Food_V3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MissionSelection_Avatar_Food_V3_C* UWid_MissionSelection_Avatar_Food_V3_C::GetDefaultObj()
{
	static class UWid_MissionSelection_Avatar_Food_V3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MissionSelection_Avatar_Food_V3_C*>(UWid_MissionSelection_Avatar_Food_V3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C.ChangeAvatarColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MissionSelection_Avatar_TypeSelection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_MissionSelection_Avatar_Food_V3_C::ChangeAvatarColor(enum class Enum_MissionSelection_Avatar_Type Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Avatar_Food_V3_C", "ChangeAvatarColor");

	Params::UWid_MissionSelection_Avatar_Food_V3_C_ChangeAvatarColor_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C.SetEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MissionSelection_Avatar_TypeType                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Avatar_Food_V3_C::SetEffect(enum class Enum_MissionSelection_Avatar_Type Type, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Avatar_Food_V3_C", "SetEffect");

	Params::UWid_MissionSelection_Avatar_Food_V3_C_SetEffect_Params Parms{};

	Parms.Type = Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C.ChangeAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NewName                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Avatar_Food_V3_C::ChangeAvatar(class UTexture2D* Image, class FText NewName, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Avatar_Food_V3_C", "ChangeAvatar");

	Params::UWid_MissionSelection_Avatar_Food_V3_C_ChangeAvatar_Params Parms{};

	Parms.Image = Image;
	Parms.NewName = NewName;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MissionSelection_Avatar_Food_V3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Avatar_Food_V3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MissionSelection_Avatar_Food_V3.wid_MissionSelection_Avatar_Food_V3_C.ExecuteUbergraph_wid_MissionSelection_Avatar_Food_V3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MissionSelection_Avatar_Food_V3_C::ExecuteUbergraph_wid_MissionSelection_Avatar_Food_V3(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MissionSelection_Avatar_Food_V3_C", "ExecuteUbergraph_wid_MissionSelection_Avatar_Food_V3");

	Params::UWid_MissionSelection_Avatar_Food_V3_C_ExecuteUbergraph_wid_MissionSelection_Avatar_Food_V3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


