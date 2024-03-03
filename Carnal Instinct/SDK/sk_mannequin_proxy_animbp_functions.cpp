#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C
// (None)

class UClass* USk_mannequin_proxy_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("sk_mannequin_proxy_AnimBP_C");

	return Clss;
}


// sk_mannequin_proxy_AnimBP_C sk_mannequin_proxy_animbp.Default__sk_mannequin_proxy_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USk_mannequin_proxy_AnimBP_C* USk_mannequin_proxy_AnimBP_C::GetDefaultObj()
{
	static class USk_mannequin_proxy_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USk_mannequin_proxy_AnimBP_C*>(USk_mannequin_proxy_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.receive_snapshot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseSnapshot               Pose_snapshot                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USk_mannequin_proxy_AnimBP_C::Receive_snapshot(const struct FPoseSnapshot& Pose_snapshot, bool* ReturnNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "receive_snapshot");

	Params::USk_mannequin_proxy_AnimBP_C_Receive_snapshot_Params Parms{};

	Parms.Pose_snapshot = Pose_snapshot;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnNode != nullptr)
		*ReturnNode = Parms.ReturnNode;

}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USk_mannequin_proxy_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "AnimGraph");

	Params::USk_mannequin_proxy_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.init_reference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USk_mannequin_proxy_AnimBP_C::Init_reference(class AActor* CallFunc_GetOwningActor_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "init_reference");

	Params::USk_mannequin_proxy_AnimBP_C_Init_reference_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetOwningActor_ReturnValue_1 = CallFunc_GetOwningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void USk_mannequin_proxy_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void USk_mannequin_proxy_AnimBP_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function sk_mannequin_proxy_animbp.sk_mannequin_proxy_AnimBP_C.ExecuteUbergraph_sk_mannequin_proxy_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USk_mannequin_proxy_AnimBP_C::ExecuteUbergraph_sk_mannequin_proxy_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("sk_mannequin_proxy_AnimBP_C", "ExecuteUbergraph_sk_mannequin_proxy_AnimBP");

	Params::USk_mannequin_proxy_AnimBP_C_ExecuteUbergraph_sk_mannequin_proxy_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


