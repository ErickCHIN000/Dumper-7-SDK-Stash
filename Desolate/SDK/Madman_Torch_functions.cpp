#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Madman_Torch.Madman_Torch_C
// (Actor)

class UClass* AMadman_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Madman_Torch_C");

	return Clss;
}


// Madman_Torch_C Madman_Torch.Default__Madman_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMadman_Torch_C* AMadman_Torch_C::GetDefaultObj()
{
	static class AMadman_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMadman_Torch_C*>(AMadman_Torch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Madman_Torch.Madman_Torch_C.EnableTorchGlowTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMadman_Torch_C::EnableTorchGlowTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "EnableTorchGlowTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.EnableTorchGlowTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMadman_Torch_C::EnableTorchGlowTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "EnableTorchGlowTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.DisableTorchGlowTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AMadman_Torch_C::DisableTorchGlowTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "DisableTorchGlowTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.DisableTorchGlowTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AMadman_Torch_C::DisableTorchGlowTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "DisableTorchGlowTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.SpawnTorchEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::SpawnTorchEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "SpawnTorchEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.DestroyTorchEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::DestroyTorchEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "DestroyTorchEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.EnableTorchGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::EnableTorchGlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "EnableTorchGlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.EnableTorchGlowSmoothly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::EnableTorchGlowSmoothly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "EnableTorchGlowSmoothly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.DisableTorchGlow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::DisableTorchGlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "DisableTorchGlow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.DisableTorchGlowSmoothly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMadman_Torch_C::DisableTorchGlowSmoothly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "DisableTorchGlowSmoothly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Madman_Torch.Madman_Torch_C.ExecuteUbergraph_Madman_Torch
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAttachedToPawn_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetStaticMesh_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMadman_Torch_C::ExecuteUbergraph_Madman_Torch(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAttachedToPawn_ReturnValue, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue_1, class UStaticMeshComponent* CallFunc_GetStaticMesh_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Madman_Torch_C", "ExecuteUbergraph_Madman_Torch");

	Params::AMadman_Torch_C_ExecuteUbergraph_Madman_Torch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAttachedToPawn_ReturnValue = CallFunc_IsAttachedToPawn_ReturnValue;
	Parms.CallFunc_GetStaticMesh_ReturnValue = CallFunc_GetStaticMesh_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetStaticMesh_ReturnValue_1 = CallFunc_GetStaticMesh_ReturnValue_1;
	Parms.CallFunc_GetStaticMesh_ReturnValue_2 = CallFunc_GetStaticMesh_ReturnValue_2;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


