#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_InteractionObject_Resources.BP_InteractionObject_Resources_C
// (None)

class UClass* UBP_InteractionObject_Resources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_InteractionObject_Resources_C");

	return Clss;
}


// BP_InteractionObject_Resources_C BP_InteractionObject_Resources.Default__BP_InteractionObject_Resources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_InteractionObject_Resources_C* UBP_InteractionObject_Resources_C::GetDefaultObj()
{
	static class UBP_InteractionObject_Resources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_InteractionObject_Resources_C*>(UBP_InteractionObject_Resources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_InteractionObject_Resources.BP_InteractionObject_Resources_C.GetInteractionTextForResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractText                                                     (Parm, OutParm)

void UBP_InteractionObject_Resources_C::GetInteractionTextForResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, class FText* InteractText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Resources_C", "GetInteractionTextForResourceNode");

	Params::UBP_InteractionObject_Resources_C_GetInteractionTextForResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

}


// Function BP_InteractionObject_Resources.BP_InteractionObject_Resources_C.ExecuteInteractionOnResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNode_IIM_C*      ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_Resources_C::ExecuteInteractionOnResourceNode(class ABP_ResourceNode_IIM_C* ResourceNode, const struct FInteractionData& InteractionData, class AController* Controller, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Resources_C", "ExecuteInteractionOnResourceNode");

	Params::UBP_InteractionObject_Resources_C_ExecuteInteractionOnResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InteractionData = InteractionData;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_InteractionObject_Resources.BP_InteractionObject_Resources_C.CanInteractWithResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_InteractionObject_Resources_C::CanInteractWithResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_InteractionObject_Resources_C", "CanInteractWithResourceNode");

	Params::UBP_InteractionObject_Resources_C_CanInteractWithResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}

}


