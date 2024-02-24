#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_Room_base.ba_Room_base_C
// (Actor)

class UClass* Aba_Room_base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_Room_base_C");

	return Clss;
}


// ba_Room_base_C ba_Room_base.Default__ba_Room_base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_Room_base_C* Aba_Room_base_C::GetDefaultObj()
{
	static class Aba_Room_base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_Room_base_C*>(Aba_Room_base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_Room_base.ba_Room_base_C.Teleport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANote*                       Destination                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_Room_base_C::Teleport(class ANote* Destination, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Teleport");

	Params::Aba_Room_base_C_Teleport_Params Parms{};

	Parms.Destination = Destination;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_base.ba_Room_base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.Set Room Control
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_Room_Controller_C*       NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_base_C::Set_Room_Control(class Aba_Room_Controller_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Set Room Control");

	Params::Aba_Room_base_C_Set_Room_Control_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_Room_base.ba_Room_base_C.Show_Upgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::Show_Upgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Show_Upgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.Update A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::Update_A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Update A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.Update B
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::Update_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Update B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.Delete Room
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_Room_base_C::Delete_Room()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "Delete Room");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_Room_base.ba_Room_base_C.ExecuteUbergraph_ba_Room_base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Room_Controller_C*       K2Node_DynamicCast_AsBa_Room_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_Room_Controller_C*       K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_Room_base_C::ExecuteUbergraph_ba_Room_base(int32 EntryPoint, class Aba_Room_Controller_C* K2Node_DynamicCast_AsBa_Room_Controller, bool K2Node_DynamicCast_bSuccess, class Aba_Room_Controller_C* K2Node_CustomEvent_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_Room_base_C", "ExecuteUbergraph_ba_Room_base");

	Params::Aba_Room_base_C_ExecuteUbergraph_ba_Room_base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBa_Room_Controller = K2Node_DynamicCast_AsBa_Room_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;

	UObject::ProcessEvent(Func, &Parms);

}

}


