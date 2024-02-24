#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MELoadingScreen_BP.MELoadingScreen_BP_C
// (None)

class UClass* UMELoadingScreen_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MELoadingScreen_BP_C");

	return Clss;
}


// MELoadingScreen_BP_C MELoadingScreen_BP.Default__MELoadingScreen_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMELoadingScreen_BP_C* UMELoadingScreen_BP_C::GetDefaultObj()
{
	static class UMELoadingScreen_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMELoadingScreen_BP_C*>(UMELoadingScreen_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MELoadingScreen_BP.MELoadingScreen_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMELoadingScreen_BP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MELoadingScreen_BP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MELoadingScreen_BP.MELoadingScreen_BP_C.ExecuteUbergraph_MELoadingScreen_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMED_DLCManager*             CallFunc_GetDLCManager_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnsDLC01_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMELoadingScreen_BP_C::ExecuteUbergraph_MELoadingScreen_BP(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AMED_DLCManager* CallFunc_GetDLCManager_ReturnValue, bool CallFunc_OwnsDLC01_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MELoadingScreen_BP_C", "ExecuteUbergraph_MELoadingScreen_BP");

	Params::UMELoadingScreen_BP_C_ExecuteUbergraph_MELoadingScreen_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDLCManager_ReturnValue = CallFunc_GetDLCManager_ReturnValue;
	Parms.CallFunc_OwnsDLC01_ReturnValue = CallFunc_OwnsDLC01_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


