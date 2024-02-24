#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ResourceInteraction.BPI_ResourceInteraction_C
// (None)

class UClass* IBPI_ResourceInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ResourceInteraction_C");

	return Clss;
}


// BPI_ResourceInteraction_C BPI_ResourceInteraction.Default__BPI_ResourceInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ResourceInteraction_C* IBPI_ResourceInteraction_C::GetDefaultObj()
{
	static class IBPI_ResourceInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ResourceInteraction_C*>(IBPI_ResourceInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ResourceInteraction.BPI_ResourceInteraction_C.GetInteractionTextForResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        InteractText                                                     (Parm, OutParm)

void IBPI_ResourceInteraction_C::GetInteractionTextForResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, class FText* InteractText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceInteraction_C", "GetInteractionTextForResourceNode");

	Params::IBPI_ResourceInteraction_C_GetInteractionTextForResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

}


// Function BPI_ResourceInteraction.BPI_ResourceInteraction_C.ExecuteInteractionOnResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNode_IIM_C*      ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ResourceInteraction_C::ExecuteInteractionOnResourceNode(class ABP_ResourceNode_IIM_C* ResourceNode, const struct FInteractionData& InteractionData, class AController* Controller, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceInteraction_C", "ExecuteInteractionOnResourceNode");

	Params::IBPI_ResourceInteraction_C_ExecuteInteractionOnResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InteractionData = InteractionData;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPI_ResourceInteraction.BPI_ResourceInteraction_C.CanInteractWithResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ResourceInteraction_C::CanInteractWithResourceNode(class AResourceNodeIIMBase* ResourceNode, int32 InstanceID, bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ResourceInteraction_C", "CanInteractWithResourceNode");

	Params::IBPI_ResourceInteraction_C_CanInteractWithResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.InstanceID = InstanceID;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}

}


