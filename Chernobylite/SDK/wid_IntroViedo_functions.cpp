#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_IntroViedo.wid_IntroViedo_C
// (None)

class UClass* UWid_IntroViedo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IntroViedo_C");

	return Clss;
}


// wid_IntroViedo_C wid_IntroViedo.Default__wid_IntroViedo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_IntroViedo_C* UWid_IntroViedo_C::GetDefaultObj()
{
	static class UWid_IntroViedo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_IntroViedo_C*>(UWid_IntroViedo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IntroViedo.wid_IntroViedo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_IntroViedo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IntroViedo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IntroViedo.wid_IntroViedo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_IntroViedo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IntroViedo_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IntroViedo.wid_IntroViedo_C.ExecuteUbergraph_wid_IntroViedo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_2                                         (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_3                                         (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_IntroViedo_C::ExecuteUbergraph_wid_IntroViedo(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IntroViedo_C", "ExecuteUbergraph_wid_IntroViedo");

	Params::UWid_IntroViedo_C_ExecuteUbergraph_wid_IntroViedo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_delegate_Variable_2 = Temp_delegate_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_delegate_Variable_3 = Temp_delegate_Variable_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_PostEvent_ReturnValue_2 = CallFunc_PostEvent_ReturnValue_2;
	Parms.CallFunc_PostEvent_ReturnValue_3 = CallFunc_PostEvent_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


