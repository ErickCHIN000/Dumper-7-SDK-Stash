#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SE_Electric_Default.BP_SE_Electric_Default_C
// (Actor)

class UClass* ABP_SE_Electric_Default_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SE_Electric_Default_C");

	return Clss;
}


// BP_SE_Electric_Default_C BP_SE_Electric_Default.Default__BP_SE_Electric_Default_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SE_Electric_Default_C* ABP_SE_Electric_Default_C::GetDefaultObj()
{
	static class ABP_SE_Electric_Default_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SE_Electric_Default_C*>(ABP_SE_Electric_Default_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ElectricBeam_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      ShockedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bNewChain                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SE_Electric_Default_C::ElectricBeam_BP(class AActor* ShockedActor, bool bNewChain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "ElectricBeam_BP");

	Params::ABP_SE_Electric_Default_C_ElectricBeam_BP_Params Parms{};

	Parms.ShockedActor = ShockedActor;
	Parms.bNewChain = bNewChain;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.BPResetForPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SE_Electric_Default_C::BPResetForPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "BPResetForPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.BPClientInitializeStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGStatusEffectManager*      Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Electric_Default_C::BPClientInitializeStatus(class UGGStatusEffectManager* Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "BPClientInitializeStatus");

	Params::ABP_SE_Electric_Default_C_BPClientInitializeStatus_Params Parms{};

	Parms.Manager = Manager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.SelfElectricShock_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      ShockedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Electric_Default_C::SelfElectricShock_BP(class AActor* ShockedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "SelfElectricShock_BP");

	Params::ABP_SE_Electric_Default_C_SelfElectricShock_BP_Params Parms{};

	Parms.ShockedActor = ShockedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.SelfInitialShock_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      ShockedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SE_Electric_Default_C::SelfInitialShock_BP(class AActor* ShockedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "SelfInitialShock_BP");

	Params::ABP_SE_Electric_Default_C_SelfInitialShock_BP_Params Parms{};

	Parms.ShockedActor = ShockedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ElectrocutionChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsElectrocuting                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bElectrocutingGoat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SE_Electric_Default_C::ElectrocutionChanged_BP(bool bIsElectrocuting, bool bElectrocutingGoat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "ElectrocutionChanged_BP");

	Params::ABP_SE_Electric_Default_C_ElectrocutionChanged_BP_Params Parms{};

	Parms.bIsElectrocuting = bIsElectrocuting;
	Parms.bElectrocutingGoat = bElectrocutingGoat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.BPInitializeStatus
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGGStatusEffectManager*      Manager                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EApplicationMethod      ApplicationMethod                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SpreadFrom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMovedBetweenActors                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SE_Electric_Default_C::BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "BPInitializeStatus");

	Params::ABP_SE_Electric_Default_C_BPInitializeStatus_Params Parms{};

	Parms.Manager = Manager;
	Parms.ApplicationMethod = ApplicationMethod;
	Parms.SpreadFrom = SpreadFrom;
	Parms.bMovedBetweenActors = bMovedBetweenActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ExecuteUbergraph_BP_SE_Electric_Default
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ShockedActor_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewChain                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGStatusEffectManager*      K2Node_Event_Manager_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ShockedActor_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ShockedActor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAffectedActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsElectrocuting                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bElectrocutingGoat                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGStatusEffectManager*      K2Node_Event_Manager                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EApplicationMethod      K2Node_Event_ApplicationMethod                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SpreadFrom                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bMovedBetweenActors                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SE_Electric_Default_C::ExecuteUbergraph_BP_SE_Electric_Default(int32 EntryPoint, class AActor* K2Node_Event_ShockedActor_2, bool K2Node_Event_bNewChain, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGGStatusEffectManager* K2Node_Event_Manager_1, class AActor* K2Node_Event_ShockedActor_1, class AActor* K2Node_Event_ShockedActor, class AActor* CallFunc_GetAffectedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool K2Node_Event_bIsElectrocuting, bool K2Node_Event_bElectrocutingGoat, class UGGStatusEffectManager* K2Node_Event_Manager, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SE_Electric_Default_C", "ExecuteUbergraph_BP_SE_Electric_Default");

	Params::ABP_SE_Electric_Default_C_ExecuteUbergraph_BP_SE_Electric_Default_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ShockedActor_2 = K2Node_Event_ShockedActor_2;
	Parms.K2Node_Event_bNewChain = K2Node_Event_bNewChain;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Manager_1 = K2Node_Event_Manager_1;
	Parms.K2Node_Event_ShockedActor_1 = K2Node_Event_ShockedActor_1;
	Parms.K2Node_Event_ShockedActor = K2Node_Event_ShockedActor;
	Parms.CallFunc_GetAffectedActor_ReturnValue = CallFunc_GetAffectedActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.K2Node_Event_bIsElectrocuting = K2Node_Event_bIsElectrocuting;
	Parms.K2Node_Event_bElectrocutingGoat = K2Node_Event_bElectrocutingGoat;
	Parms.K2Node_Event_Manager = K2Node_Event_Manager;
	Parms.K2Node_Event_ApplicationMethod = K2Node_Event_ApplicationMethod;
	Parms.K2Node_Event_SpreadFrom = K2Node_Event_SpreadFrom;
	Parms.K2Node_Event_bMovedBetweenActors = K2Node_Event_bMovedBetweenActors;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


