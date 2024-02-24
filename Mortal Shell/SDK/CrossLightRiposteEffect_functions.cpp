#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CrossLightRiposteEffect.CrossLightRiposteEffect_C
// (Actor)

class UClass* ACrossLightRiposteEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrossLightRiposteEffect_C");

	return Clss;
}


// CrossLightRiposteEffect_C CrossLightRiposteEffect.Default__CrossLightRiposteEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrossLightRiposteEffect_C* ACrossLightRiposteEffect_C::GetDefaultObj()
{
	static class ACrossLightRiposteEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrossLightRiposteEffect_C*>(ACrossLightRiposteEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CrossLightRiposteEffect.CrossLightRiposteEffect_C.Animate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ACrossLightRiposteEffect_C::Animate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrossLightRiposteEffect_C", "Animate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrossLightRiposteEffect.CrossLightRiposteEffect_C.Animate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ACrossLightRiposteEffect_C::Animate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrossLightRiposteEffect_C", "Animate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrossLightRiposteEffect.CrossLightRiposteEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACrossLightRiposteEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrossLightRiposteEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CrossLightRiposteEffect.CrossLightRiposteEffect_C.ExecuteUbergraph_CrossLightRiposteEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACrossLightRiposteEffect_C::ExecuteUbergraph_CrossLightRiposteEffect(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrossLightRiposteEffect_C", "ExecuteUbergraph_CrossLightRiposteEffect");

	Params::ACrossLightRiposteEffect_C_ExecuteUbergraph_CrossLightRiposteEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


