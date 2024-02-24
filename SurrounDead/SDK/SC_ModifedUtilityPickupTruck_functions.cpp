#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C
// (None)

class UClass* USC_ModifedUtilityPickupTruck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SC_ModifedUtilityPickupTruck_C");

	return Clss;
}


// SC_ModifedUtilityPickupTruck_C SC_ModifedUtilityPickupTruck.Default__SC_ModifedUtilityPickupTruck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USC_ModifedUtilityPickupTruck_C* USC_ModifedUtilityPickupTruck_C::GetDefaultObj()
{
	static class USC_ModifedUtilityPickupTruck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USC_ModifedUtilityPickupTruck_C*>(USC_ModifedUtilityPickupTruck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.SetActionbarFollower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 JigRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "SetActionbarFollower");

	Params::USC_ModifedUtilityPickupTruck_C_SetActionbarFollower_Params Parms{};

	Parms.JigRef = JigRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetListOfContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void USC_ModifedUtilityPickupTruck_C::GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetListOfContainers");

	Params::USC_ModifedUtilityPickupTruck_C_GetListOfContainers_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetContainerByAttachmentType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             JigContainer                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ContainerIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetContainerByAttachmentType");

	Params::USC_ModifedUtilityPickupTruck_C_GetContainerByAttachmentType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (JigContainer != nullptr)
		*JigContainer = Parms.JigContainer;

	if (ContainerIndex != nullptr)
		*ContainerIndex = Parms.ContainerIndex;

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetDropWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropItemBackGwidget_C*      DropWRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::GetDropWidget(class UDropItemBackGwidget_C** DropWRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetDropWidget");

	Params::USC_ModifedUtilityPickupTruck_C_GetDropWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DropWRef != nullptr)
		*DropWRef = Parms.DropWRef;

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetJSIContainerByPlayerSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerSlots            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 EquippedItem                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsPending_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetJSIContainerByPlayerSlots");

	Params::USC_ModifedUtilityPickupTruck_C_GetJSIContainerByPlayerSlots_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Container != nullptr)
		*Container = Parms.Container;

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

	if (IsPending_ != nullptr)
		*IsPending_ = Parms.IsPending_;

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetListOfNonAddContainers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)

void USC_ModifedUtilityPickupTruck_C::GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetListOfNonAddContainers");

	Params::USC_ModifedUtilityPickupTruck_C_GetListOfNonAddContainers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.GetAllAttachments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Attachments                                                      (Parm, OutParm)

void USC_ModifedUtilityPickupTruck_C::GetAllAttachments(TArray<class FName>* Attachments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "GetAllAttachments");

	Params::USC_ModifedUtilityPickupTruck_C_GetAllAttachments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attachments != nullptr)
		*Attachments = std::move(Parms.Attachments);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.SetActorOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::SetActorOwner(class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "SetActorOwner");

	Params::USC_ModifedUtilityPickupTruck_C_SetActorOwner_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.JSICheckStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USC_ModifedUtilityPickupTruck_C::JSICheckStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "JSICheckStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.JSIOnWeightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::JSIOnWeightUpdated(double NewWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "JSIOnWeightUpdated");

	Params::USC_ModifedUtilityPickupTruck_C_JSIOnWeightUpdated_Params Parms{};

	Parms.NewWeight = NewWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.SetItemReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::SetItemReference(class UJSI_Slot_C* ItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "SetItemReference");

	Params::USC_ModifedUtilityPickupTruck_C_SetItemReference_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SC_ModifedUtilityPickupTruck.SC_ModifedUtilityPickupTruck_C.ExecuteUbergraph_SC_ModifedUtilityPickupTruck
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_Event_ItemRef                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorRef                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewWeight                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USC_ModifedUtilityPickupTruck_C::ExecuteUbergraph_SC_ModifedUtilityPickupTruck(int32 EntryPoint, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SC_ModifedUtilityPickupTruck_C", "ExecuteUbergraph_SC_ModifedUtilityPickupTruck");

	Params::USC_ModifedUtilityPickupTruck_C_ExecuteUbergraph_SC_ModifedUtilityPickupTruck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemRef = K2Node_Event_ItemRef;
	Parms.K2Node_Event_ActorRef = K2Node_Event_ActorRef;
	Parms.K2Node_Event_NewWeight = K2Node_Event_NewWeight;

	UObject::ProcessEvent(Func, &Parms);

}

}

