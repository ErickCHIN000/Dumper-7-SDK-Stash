#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LargeContainer_Widget.LargeContainer_Widget_C
// (None)

class UClass* ULargeContainer_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LargeContainer_Widget_C");

	return Clss;
}


// LargeContainer_Widget_C LargeContainer_Widget.Default__LargeContainer_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULargeContainer_Widget_C* ULargeContainer_Widget_C::GetDefaultObj()
{
	static class ULargeContainer_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULargeContainer_Widget_C*>(ULargeContainer_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LargeContainer_Widget.LargeContainer_Widget_C.SetActionbarFollower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 JigRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "SetActionbarFollower");

	Params::ULargeContainer_Widget_C_SetActionbarFollower_Params Parms{};

	Parms.JigRef = JigRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetAllAttachments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Attachments                                                      (Parm, OutParm)

void ULargeContainer_Widget_C::GetAllAttachments(TArray<class FName>* Attachments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetAllAttachments");

	Params::ULargeContainer_Widget_C_GetAllAttachments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attachments != nullptr)
		*Attachments = std::move(Parms.Attachments);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetListOfNonAddContainers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)

void ULargeContainer_Widget_C::GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetListOfNonAddContainers");

	Params::ULargeContainer_Widget_C_GetListOfNonAddContainers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetJSIContainerByPlayerSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerSlots            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 EquippedItem                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsPending_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetJSIContainerByPlayerSlots");

	Params::ULargeContainer_Widget_C_GetJSIContainerByPlayerSlots_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Container != nullptr)
		*Container = Parms.Container;

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

	if (IsPending_ != nullptr)
		*IsPending_ = Parms.IsPending_;

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetDropWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropItemBackGwidget_C*      DropWRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::GetDropWidget(class UDropItemBackGwidget_C** DropWRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetDropWidget");

	Params::ULargeContainer_Widget_C_GetDropWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DropWRef != nullptr)
		*DropWRef = Parms.DropWRef;

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetListOfContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void ULargeContainer_Widget_C::GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetListOfContainers");

	Params::ULargeContainer_Widget_C_GetListOfContainers_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.GetContainerByAttachmentType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             JigContainer                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ContainerIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "GetContainerByAttachmentType");

	Params::ULargeContainer_Widget_C_GetContainerByAttachmentType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (JigContainer != nullptr)
		*JigContainer = Parms.JigContainer;

	if (ContainerIndex != nullptr)
		*ContainerIndex = Parms.ContainerIndex;

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.SetItemReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::SetItemReference(class UJSI_Slot_C* ItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "SetItemReference");

	Params::ULargeContainer_Widget_C_SetItemReference_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.SetActorOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::SetActorOwner(class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "SetActorOwner");

	Params::ULargeContainer_Widget_C_SetActorOwner_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.JSICheckStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULargeContainer_Widget_C::JSICheckStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "JSICheckStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.JSIOnWeightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::JSIOnWeightUpdated(double NewWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "JSIOnWeightUpdated");

	Params::ULargeContainer_Widget_C_JSIOnWeightUpdated_Params Parms{};

	Parms.NewWeight = NewWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.BndEvt__LargeContainer_Widget_Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULargeContainer_Widget_C::BndEvt__LargeContainer_Widget_Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "BndEvt__LargeContainer_Widget_Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LargeContainer_Widget.LargeContainer_Widget_C.ExecuteUbergraph_LargeContainer_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_Event_ItemRef                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorRef                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewWeight                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_JigMultiplayer_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCount_Count                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JSI_CheckIfCanAddItemToContainer_Result                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStack__CanStack                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanStack__FreeSpaceAvailable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeContainer_Widget_C::ExecuteUbergraph_LargeContainer_Widget(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UBP_JigMultiplayer_C* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UJSI_Slot_C* CallFunc_Array_Get_Item, int32 CallFunc_GetCount_Count, bool CallFunc_JSI_CheckIfCanAddItemToContainer_Result, class UJSIContainer_C* CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer, int32 CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex, bool CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation, bool CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result, class UJSI_Slot_C* CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem, bool CallFunc_CanStack__CanStack, bool CallFunc_CanStack__FreeSpaceAvailable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LargeContainer_Widget_C", "ExecuteUbergraph_LargeContainer_Widget");

	Params::ULargeContainer_Widget_C_ExecuteUbergraph_LargeContainer_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_ItemRef = K2Node_Event_ItemRef;
	Parms.K2Node_Event_ActorRef = K2Node_Event_ActorRef;
	Parms.K2Node_Event_NewWeight = K2Node_Event_NewWeight;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCount_Count = CallFunc_GetCount_Count;
	Parms.CallFunc_JSI_CheckIfCanAddItemToContainer_Result = CallFunc_JSI_CheckIfCanAddItemToContainer_Result;
	Parms.CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer = CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer;
	Parms.CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex = CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex;
	Parms.CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation = CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation;
	Parms.CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result = CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result;
	Parms.CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem = CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem;
	Parms.CallFunc_CanStack__CanStack = CallFunc_CanStack__CanStack;
	Parms.CallFunc_CanStack__FreeSpaceAvailable = CallFunc_CanStack__FreeSpaceAvailable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


