#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BagInventory.UMG_BagInventory_C
// (None)

class UClass* UUMG_BagInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BagInventory_C");

	return Clss;
}


// UMG_BagInventory_C UMG_BagInventory.Default__UMG_BagInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BagInventory_C* UUMG_BagInventory_C::GetDefaultObj()
{
	static class UUMG_BagInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BagInventory_C*>(UUMG_BagInventory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BagInventory.UMG_BagInventory_C.GetLinkedActorContainerInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  ContainerInventory                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventoryContainer_Inventory                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetInventoryContainer_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BagInventory_C::GetLinkedActorContainerInventory(class UInventory** ContainerInventory, class UInventory* CallFunc_GetInventoryContainer_Inventory, enum class EDataValid CallFunc_GetInventoryContainer_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "GetLinkedActorContainerInventory");

	Params::UUMG_BagInventory_C_GetLinkedActorContainerInventory_Params Parms{};

	Parms.CallFunc_GetInventoryContainer_Inventory = CallFunc_GetInventoryContainer_Inventory;
	Parms.CallFunc_GetInventoryContainer_Paths = CallFunc_GetInventoryContainer_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInventory != nullptr)
		*ContainerInventory = Parms.ContainerInventory;

}


// Function UMG_BagInventory.UMG_BagInventory_C.GetLinkedActorInventoryComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*         InventoryComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BagInventory_C::GetLinkedActorInventoryComponent(class UInventoryComponent** InventoryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "GetLinkedActorInventoryComponent");

	Params::UUMG_BagInventory_C_GetLinkedActorInventoryComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InventoryComponent != nullptr)
		*InventoryComponent = Parms.InventoryComponent;

}


// Function UMG_BagInventory.UMG_BagInventory_C.LinkedActorDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BagInventory_C::LinkedActorDestroyed(class AActor* DestroyedActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "LinkedActorDestroyed");

	Params::UUMG_BagInventory_C_LinkedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BagInventory.UMG_BagInventory_C.SetupObjectInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  ContainerInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_BagInventory_C::SetupObjectInventory(class UInventory* ContainerInventory, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "SetupObjectInventory");

	Params::UUMG_BagInventory_C_SetupObjectInventory_Params Parms{};

	Parms.ContainerInventory = ContainerInventory;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BagInventory.UMG_BagInventory_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BagInventory_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_BagInventory_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BagInventory.UMG_BagInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BagInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BagInventory.UMG_BagInventory_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_BagInventory_C::Initialise(const struct FItemData& Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "Initialise");

	Params::UUMG_BagInventory_C_Initialise_Params Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BagInventory.UMG_BagInventory_C.ExecuteUbergraph_UMG_BagInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_Item_Data                                     (ContainsInstancedReference)

void UUMG_BagInventory_C::ExecuteUbergraph_UMG_BagInventory(int32 EntryPoint, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FItemData& K2Node_CustomEvent_Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BagInventory_C", "ExecuteUbergraph_UMG_BagInventory");

	Params::UUMG_BagInventory_C_ExecuteUbergraph_UMG_BagInventory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Item_Data = K2Node_CustomEvent_Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}

}


