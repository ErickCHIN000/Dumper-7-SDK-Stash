#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Glowing_Pickup_Actor.Glowing_Pickup_Actor_C
// (Actor)

class UClass* AGlowing_Pickup_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Glowing_Pickup_Actor_C");

	return Clss;
}


// Glowing_Pickup_Actor_C Glowing_Pickup_Actor.Default__Glowing_Pickup_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGlowing_Pickup_Actor_C* AGlowing_Pickup_Actor_C::GetDefaultObj()
{
	static class AGlowing_Pickup_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGlowing_Pickup_Actor_C*>(AGlowing_Pickup_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Glowing_Pickup_Actor.Glowing_Pickup_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGlowing_Pickup_Actor_C::UserConstructionScript(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Actor_C", "UserConstructionScript");

	Params::AGlowing_Pickup_Actor_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Glowing_Pickup_Actor.Glowing_Pickup_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGlowing_Pickup_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Glowing_Pickup_Actor.Glowing_Pickup_Actor_C.OnTimerStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGlowing_Pickup_Actor_C::OnTimerStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Actor_C", "OnTimerStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Glowing_Pickup_Actor.Glowing_Pickup_Actor_C.OnTimerEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AGlowing_Pickup_Actor_C::OnTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Actor_C", "OnTimerEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Glowing_Pickup_Actor.Glowing_Pickup_Actor_C.ExecuteUbergraph_Glowing_Pickup_Actor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGlowing_Pickup_Actor_C::ExecuteUbergraph_Glowing_Pickup_Actor(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UParticleSystem* K2Node_Select_Default, class UParticleSystem* Temp_object_Variable_2, class UParticleSystem* Temp_object_Variable_3, class UParticleSystem* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Glowing_Pickup_Actor_C", "ExecuteUbergraph_Glowing_Pickup_Actor");

	Params::AGlowing_Pickup_Actor_C_ExecuteUbergraph_Glowing_Pickup_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


