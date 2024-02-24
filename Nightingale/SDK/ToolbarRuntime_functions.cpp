#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ToolbarRuntime.ToolbarAccessInterface
// (None)

class UClass* IToolbarAccessInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarAccessInterface");

	return Clss;
}


// ToolbarAccessInterface ToolbarRuntime.Default__ToolbarAccessInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolbarAccessInterface* IToolbarAccessInterface::GetDefaultObj()
{
	static class IToolbarAccessInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolbarAccessInterface*>(IToolbarAccessInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarAccessInterface.FindToolbarArrangement_BP
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// enum class EToolbarArrangement     Arrangement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IToolbarArrangementInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IToolbarArrangementInterface> IToolbarAccessInterface::FindToolbarArrangement_BP(enum class EToolbarArrangement Arrangement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarAccessInterface", "FindToolbarArrangement_BP");

	Params::IToolbarAccessInterface_FindToolbarArrangement_BP_Params Parms{};

	Parms.Arrangement = Arrangement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolbarRuntime.ToolbarArrangementInterface
// (None)

class UClass* IToolbarArrangementInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarArrangementInterface");

	return Clss;
}


// ToolbarArrangementInterface ToolbarRuntime.Default__ToolbarArrangementInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolbarArrangementInterface* IToolbarArrangementInterface::GetDefaultObj()
{
	static class IToolbarArrangementInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolbarArrangementInterface*>(IToolbarArrangementInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarArrangementInterface.UnbindAllDelegates
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::UnbindAllDelegates(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "UnbindAllDelegates");

	Params::IToolbarArrangementInterface_UnbindAllDelegates_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.ToggleSheathe
// (Native, Public, BlueprintCallable)
// Parameters:

void IToolbarArrangementInterface::ToggleSheathe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "ToggleSheathe");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.SwapToolbarSlots
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::SwapToolbarSlots(int32 SlotIndex, int32 OtherSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "SwapToolbarSlots");

	Params::IToolbarArrangementInterface_SwapToolbarSlots_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.OtherSlotIndex = OtherSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.SelectToolbarSlotByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::SelectToolbarSlotByIndex(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "SelectToolbarSlotByIndex");

	Params::IToolbarArrangementInterface_SelectToolbarSlotByIndex_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.RemoveInventoryEntryFromToolbar
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::RemoveInventoryEntryFromToolbar(struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "RemoveInventoryEntryFromToolbar");

	Params::IToolbarArrangementInterface_RemoveInventoryEntryFromToolbar_Params Parms{};

	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.IsSlotEntryAtIndexEmpty
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IToolbarArrangementInterface::IsSlotEntryAtIndexEmpty(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "IsSlotEntryAtIndexEmpty");

	Params::IToolbarArrangementInterface_IsSlotEntryAtIndexEmpty_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.IsSelectedSlotEmpty
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IToolbarArrangementInterface::IsSelectedSlotEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "IsSelectedSlotEmpty");

	Params::IToolbarArrangementInterface_IsSelectedSlotEmpty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.IsInventoryEntryInToolbar
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IToolbarArrangementInterface::IsInventoryEntryInToolbar(struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "IsInventoryEntryInToolbar");

	Params::IToolbarArrangementInterface_IsInventoryEntryInToolbar_Params Parms{};

	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.GetToolbarSize
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IToolbarArrangementInterface::GetToolbarSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "GetToolbarSize");

	Params::IToolbarArrangementInterface_GetToolbarSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.GetSlotEntryObjectAtIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IToolbarSlotEntryObjectInterface> IToolbarArrangementInterface::GetSlotEntryObjectAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "GetSlotEntryObjectAtIndex");

	Params::IToolbarArrangementInterface_GetSlotEntryObjectAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.GetSelectedSlotIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IToolbarArrangementInterface::GetSelectedSlotIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "GetSelectedSlotIndex");

	Params::IToolbarArrangementInterface_GetSelectedSlotIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.GetSelectedSlotEntryObject
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IToolbarSlotEntryObjectInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class IToolbarSlotEntryObjectInterface> IToolbarArrangementInterface::GetSelectedSlotEntryObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "GetSelectedSlotEntryObject");

	Params::IToolbarArrangementInterface_GetSelectedSlotEntryObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.GetGameplayTagForLoadoutSlot
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag IToolbarArrangementInterface::GetGameplayTagForLoadoutSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "GetGameplayTagForLoadoutSlot");

	Params::IToolbarArrangementInterface_GetGameplayTagForLoadoutSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.FindSlotIndexForNewSlotEntry
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IToolbarArrangementInterface::FindSlotIndexForNewSlotEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "FindSlotIndexForNewSlotEntry");

	Params::IToolbarArrangementInterface_FindSlotIndexForNewSlotEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.DeactivateSelectedSlot
// (Native, Public, BlueprintCallable)
// Parameters:

void IToolbarArrangementInterface::DeactivateSelectedSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "DeactivateSelectedSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.ClearToolbarSlot
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::ClearToolbarSlot(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "ClearToolbarSlot");

	Params::IToolbarArrangementInterface_ClearToolbarSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.ClearAllToolbarSlots
// (Native, Public, BlueprintCallable)
// Parameters:

void IToolbarArrangementInterface::ClearAllToolbarSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "ClearAllToolbarSlots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.CanAssignInventoryEntry
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IToolbarArrangementInterface::CanAssignInventoryEntry(struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "CanAssignInventoryEntry");

	Params::IToolbarArrangementInterface_CanAssignInventoryEntry_Params Parms{};

	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnToolbarSlotEntryChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::BindDelegate_OnToolbarSlotEntryChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "BindDelegate_OnToolbarSlotEntryChanged");

	Params::IToolbarArrangementInterface_BindDelegate_OnToolbarSlotEntryChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnToolbarArrangementChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::BindDelegate_OnToolbarArrangementChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "BindDelegate_OnToolbarArrangementChanged");

	Params::IToolbarArrangementInterface_BindDelegate_OnToolbarArrangementChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnSelectedSlotIndexChanged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::BindDelegate_OnSelectedSlotIndexChanged(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "BindDelegate_OnSelectedSlotIndexChanged");

	Params::IToolbarArrangementInterface_BindDelegate_OnSelectedSlotIndexChanged_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.AssignInventoryEntryToToolbarSlot
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarArrangementInterface::AssignInventoryEntryToToolbarSlot(int32 SlotIndex, struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "AssignInventoryEntryToToolbarSlot");

	Params::IToolbarArrangementInterface_AssignInventoryEntryToToolbarSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarArrangementInterface.ActivateSelectedSlot
// (Native, Public, BlueprintCallable)
// Parameters:

void IToolbarArrangementInterface::ActivateSelectedSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarArrangementInterface", "ActivateSelectedSlot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ToolbarRuntime.ToolbarComponent
// (None)

class UClass* UToolbarComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarComponent");

	return Clss;
}


// ToolbarComponent ToolbarRuntime.Default__ToolbarComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarComponent* UToolbarComponent::GetDefaultObj()
{
	static class UToolbarComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarComponent*>(UToolbarComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ToolbarRuntime.ToolbarComponent.ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature");

	Params::UToolbarComponent_ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ToolbarRuntime.ToolbarComponent.ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              OldSelectedIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewSelectedIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature(int32 OldSelectedIndex, int32 NewSelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature");

	Params::UToolbarComponent_ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature_Params Parms{};

	Parms.OldSelectedIndex = OldSelectedIndex;
	Parms.NewSelectedIndex = NewSelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ToolbarRuntime.ToolbarComponent.ToolbarArrangementChangedMulticastDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UToolbarComponent::ToolbarArrangementChangedMulticastDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "ToolbarArrangementChangedMulticastDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToolbarRuntime.ToolbarComponent.ReplaceEntryAtIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolbarSlotEntryBase*       NewEntry                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::ReplaceEntryAtIndex(int32 SlotIndex, class UToolbarSlotEntryBase* NewEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "ReplaceEntryAtIndex");

	Params::UToolbarComponent_ReplaceEntryAtIndex_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.NewEntry = NewEntry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.OnRep_ToolbarEntryObjects
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UToolbarSlotEntryBase*>OldToolbarEntryObjects                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UToolbarComponent::OnRep_ToolbarEntryObjects(TArray<class UToolbarSlotEntryBase*>& OldToolbarEntryObjects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "OnRep_ToolbarEntryObjects");

	Params::UToolbarComponent_OnRep_ToolbarEntryObjects_Params Parms{};

	Parms.OldToolbarEntryObjects = OldToolbarEntryObjects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.OnRep_SelectedSlotIndex
// (Final, Native, Private)
// Parameters:
// int32                              OldSlotIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::OnRep_SelectedSlotIndex(int32 OldSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "OnRep_SelectedSlotIndex");

	Params::UToolbarComponent_OnRep_SelectedSlotIndex_Params Parms{};

	Parms.OldSlotIndex = OldSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.OnPossessedPawnChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                       OldPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "OnPossessedPawnChanged");

	Params::UToolbarComponent_OnPossessedPawnChanged_Params Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.ConstructSlotEntry
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UToolbarSlotEntryBase>SlotEntryClass                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InitialSlotIndex                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UToolbarSlotEntryBase*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolbarSlotEntryBase* UToolbarComponent::ConstructSlotEntry(TSubclassOf<class UToolbarSlotEntryBase> SlotEntryClass, int32 InitialSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "ConstructSlotEntry");

	Params::UToolbarComponent_ConstructSlotEntry_Params Parms{};

	Parms.SlotEntryClass = SlotEntryClass;
	Parms.InitialSlotIndex = InitialSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarComponent.Auth_SwapToolbarSlots
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherSlotIndex                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::Auth_SwapToolbarSlots(int32 SlotIndex, int32 OtherSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "Auth_SwapToolbarSlots");

	Params::UToolbarComponent_Auth_SwapToolbarSlots_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.OtherSlotIndex = OtherSlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.Auth_RemoveInventoryEntryFromToolbar
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::Auth_RemoveInventoryEntryFromToolbar(struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "Auth_RemoveInventoryEntryFromToolbar");

	Params::UToolbarComponent_Auth_RemoveInventoryEntryFromToolbar_Params Parms{};

	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.Auth_ClearToolbarSlot
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::Auth_ClearToolbarSlot(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "Auth_ClearToolbarSlot");

	Params::UToolbarComponent_Auth_ClearToolbarSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.Auth_ClearAllToolbarSlots
// (Final, Net, NetReliable, Native, Event, Private, NetServer)
// Parameters:

void UToolbarComponent::Auth_ClearAllToolbarSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "Auth_ClearAllToolbarSlots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarComponent.Auth_AssignInventoryEntryToToolbarSlot
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
// Parameters:
// int32                              SlotIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       InventoryEntryInstanceId                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UToolbarComponent::Auth_AssignInventoryEntryToToolbarSlot(int32 SlotIndex, struct FGuid& InventoryEntryInstanceId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarComponent", "Auth_AssignInventoryEntryToToolbarSlot");

	Params::UToolbarComponent_Auth_AssignInventoryEntryToToolbarSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.InventoryEntryInstanceId = InventoryEntryInstanceId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ToolbarRuntime.ToolbarInputInterface
// (None)

class UClass* IToolbarInputInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarInputInterface");

	return Clss;
}


// ToolbarInputInterface ToolbarRuntime.Default__ToolbarInputInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolbarInputInterface* IToolbarInputInterface::GetDefaultObj()
{
	static class IToolbarInputInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolbarInputInterface*>(IToolbarInputInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarInputInterface.Client_ToggleCurrentToolbarSlot
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EToolbarArrangement     Arrangement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarInputInterface::Client_ToggleCurrentToolbarSlot(enum class EToolbarArrangement Arrangement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarInputInterface", "Client_ToggleCurrentToolbarSlot");

	Params::IToolbarInputInterface_Client_ToggleCurrentToolbarSlot_Params Parms{};

	Parms.Arrangement = Arrangement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectToolbarSlotByIndex
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EToolbarArrangement     Arrangement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarInputInterface::Client_SelectToolbarSlotByIndex(enum class EToolbarArrangement Arrangement, int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarInputInterface", "Client_SelectToolbarSlotByIndex");

	Params::IToolbarInputInterface_Client_SelectToolbarSlotByIndex_Params Parms{};

	Parms.Arrangement = Arrangement;
	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectPreviousToolbarSlot
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EToolbarArrangement     Arrangement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarInputInterface::Client_SelectPreviousToolbarSlot(enum class EToolbarArrangement Arrangement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarInputInterface", "Client_SelectPreviousToolbarSlot");

	Params::IToolbarInputInterface_Client_SelectPreviousToolbarSlot_Params Parms{};

	Parms.Arrangement = Arrangement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectNextToolbarSlot
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EToolbarArrangement     Arrangement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarInputInterface::Client_SelectNextToolbarSlot(enum class EToolbarArrangement Arrangement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarInputInterface", "Client_SelectNextToolbarSlot");

	Params::IToolbarInputInterface_Client_SelectNextToolbarSlot_Params Parms{};

	Parms.Arrangement = Arrangement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ToolbarRuntime.ToolbarEntryStackCharacteristic
// (None)

class UClass* UToolbarEntryStackCharacteristic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarEntryStackCharacteristic");

	return Clss;
}


// ToolbarEntryStackCharacteristic ToolbarRuntime.Default__ToolbarEntryStackCharacteristic
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarEntryStackCharacteristic* UToolbarEntryStackCharacteristic::GetDefaultObj()
{
	static class UToolbarEntryStackCharacteristic* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarEntryStackCharacteristic*>(UToolbarEntryStackCharacteristic::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarEntryStackCharacteristic.UpdateStackSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewStackSize                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolbarEntryStackCharacteristic::UpdateStackSize(int32 NewStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryStackCharacteristic", "UpdateStackSize");

	Params::UToolbarEntryStackCharacteristic_UpdateStackSize_Params Parms{};

	Parms.NewStackSize = NewStackSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarEntryStackCharacteristic.GetStackSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UToolbarEntryStackCharacteristic::GetStackSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryStackCharacteristic", "GetStackSize");

	Params::UToolbarEntryStackCharacteristic_GetStackSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolbarRuntime.ToolbarEntryDurabilityCharacteristic
// (None)

class UClass* UToolbarEntryDurabilityCharacteristic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarEntryDurabilityCharacteristic");

	return Clss;
}


// ToolbarEntryDurabilityCharacteristic ToolbarRuntime.Default__ToolbarEntryDurabilityCharacteristic
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarEntryDurabilityCharacteristic* UToolbarEntryDurabilityCharacteristic::GetDefaultObj()
{
	static class UToolbarEntryDurabilityCharacteristic* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarEntryDurabilityCharacteristic*>(UToolbarEntryDurabilityCharacteristic::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarEntryDurabilityCharacteristic.UpdateDurability
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemInstanceDurabilityData NewDurabilityData                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolbarEntryDurabilityCharacteristic::UpdateDurability(struct FItemInstanceDurabilityData& NewDurabilityData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryDurabilityCharacteristic", "UpdateDurability");

	Params::UToolbarEntryDurabilityCharacteristic_UpdateDurability_Params Parms{};

	Parms.NewDurabilityData = NewDurabilityData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarEntryDurabilityCharacteristic.GetDurability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemInstanceDurabilityData ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FItemInstanceDurabilityData UToolbarEntryDurabilityCharacteristic::GetDurability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryDurabilityCharacteristic", "GetDurability");

	Params::UToolbarEntryDurabilityCharacteristic_GetDurability_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolbarRuntime.ToolbarEntryQualityCharacteristic
// (None)

class UClass* UToolbarEntryQualityCharacteristic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarEntryQualityCharacteristic");

	return Clss;
}


// ToolbarEntryQualityCharacteristic ToolbarRuntime.Default__ToolbarEntryQualityCharacteristic
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarEntryQualityCharacteristic* UToolbarEntryQualityCharacteristic::GetDefaultObj()
{
	static class UToolbarEntryQualityCharacteristic* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarEntryQualityCharacteristic*>(UToolbarEntryQualityCharacteristic::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarEntryQualityCharacteristic.UpdateQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EItemQuality            NewQuality                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolbarEntryQualityCharacteristic::UpdateQuality(enum class EItemQuality NewQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryQualityCharacteristic", "UpdateQuality");

	Params::UToolbarEntryQualityCharacteristic_UpdateQuality_Params Parms{};

	Parms.NewQuality = NewQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarEntryQualityCharacteristic.GetQuality
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EItemQuality            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EItemQuality UToolbarEntryQualityCharacteristic::GetQuality()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarEntryQualityCharacteristic", "GetQuality");

	Params::UToolbarEntryQualityCharacteristic_GetQuality_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolbarRuntime.ToolbarSlotEntryBase
// (None)

class UClass* UToolbarSlotEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarSlotEntryBase");

	return Clss;
}


// ToolbarSlotEntryBase ToolbarRuntime.Default__ToolbarSlotEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarSlotEntryBase* UToolbarSlotEntryBase::GetDefaultObj()
{
	static class UToolbarSlotEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarSlotEntryBase*>(UToolbarSlotEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarSlotEntryBase.HasAuthority
// (Final, Native, Protected, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UToolbarSlotEntryBase::HasAuthority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryBase", "HasAuthority");

	Params::UToolbarSlotEntryBase_HasAuthority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryBase.GetSlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UToolbarSlotEntryBase::GetSlotIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryBase", "GetSlotIndex");

	Params::UToolbarSlotEntryBase_GetSlotIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryBase.GetOwningController
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UToolbarSlotEntryBase::GetOwningController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryBase", "GetOwningController");

	Params::UToolbarSlotEntryBase_GetOwningController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ToolbarRuntime.ToolbarSlotEntryObjectInterface
// (None)

class UClass* IToolbarSlotEntryObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarSlotEntryObjectInterface");

	return Clss;
}


// ToolbarSlotEntryObjectInterface ToolbarRuntime.Default__ToolbarSlotEntryObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolbarSlotEntryObjectInterface* IToolbarSlotEntryObjectInterface::GetDefaultObj()
{
	static class IToolbarSlotEntryObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolbarSlotEntryObjectInterface*>(IToolbarSlotEntryObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.UnbindAllDelegates
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarSlotEntryObjectInterface::UnbindAllDelegates(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "UnbindAllDelegates");

	Params::IToolbarSlotEntryObjectInterface_UnbindAllDelegates_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetTooltipWidget
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* IToolbarSlotEntryObjectInterface::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetTooltipWidget");

	Params::IToolbarSlotEntryObjectInterface_GetTooltipWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetStackCharacteristic
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UToolbarEntryStackCharacteristic*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolbarEntryStackCharacteristic* IToolbarSlotEntryObjectInterface::GetStackCharacteristic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetStackCharacteristic");

	Params::IToolbarSlotEntryObjectInterface_GetStackCharacteristic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetQualityCharacteristic
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UToolbarEntryQualityCharacteristic*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolbarEntryQualityCharacteristic* IToolbarSlotEntryObjectInterface::GetQualityCharacteristic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetQualityCharacteristic");

	Params::IToolbarSlotEntryObjectInterface_GetQualityCharacteristic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetIconTexture
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*                  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* IToolbarSlotEntryObjectInterface::GetIconTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetIconTexture");

	Params::IToolbarSlotEntryObjectInterface_GetIconTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetDurabilityCharacteristic
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UToolbarEntryDurabilityCharacteristic*ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UToolbarEntryDurabilityCharacteristic* IToolbarSlotEntryObjectInterface::GetDurabilityCharacteristic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetDurabilityCharacteristic");

	Params::IToolbarSlotEntryObjectInterface_GetDurabilityCharacteristic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetDragAndDropOperation
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDragDropOperation* IToolbarSlotEntryObjectInterface::GetDragAndDropOperation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "GetDragAndDropOperation");

	Params::IToolbarSlotEntryObjectInterface_GetDragAndDropOperation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.BindDelegateTo_OnToolbarSlotEntryUpdated
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarSlotEntryObjectInterface::BindDelegateTo_OnToolbarSlotEntryUpdated(FDelegateProperty_& Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryObjectInterface", "BindDelegateTo_OnToolbarSlotEntryUpdated");

	Params::IToolbarSlotEntryObjectInterface_BindDelegateTo_OnToolbarSlotEntryUpdated_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ToolbarRuntime.ToolbarSlotEntryWidgetInterface
// (None)

class UClass* IToolbarSlotEntryWidgetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarSlotEntryWidgetInterface");

	return Clss;
}


// ToolbarSlotEntryWidgetInterface ToolbarRuntime.Default__ToolbarSlotEntryWidgetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IToolbarSlotEntryWidgetInterface* IToolbarSlotEntryWidgetInterface::GetDefaultObj()
{
	static class IToolbarSlotEntryWidgetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IToolbarSlotEntryWidgetInterface*>(IToolbarSlotEntryWidgetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function ToolbarRuntime.ToolbarSlotEntryWidgetInterface.SetSlotIndex
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarSlotEntryWidgetInterface::SetSlotIndex(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryWidgetInterface", "SetSlotIndex");

	Params::IToolbarSlotEntryWidgetInterface_SetSlotIndex_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToolbarRuntime.ToolbarSlotEntryWidgetInterface.SetSlotEntry
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IToolbarSlotEntryObjectInterface>SlotEntryObject                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IToolbarSlotEntryWidgetInterface::SetSlotEntry(TScriptInterface<class IToolbarSlotEntryObjectInterface>& SlotEntryObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ToolbarSlotEntryWidgetInterface", "SetSlotEntry");

	Params::IToolbarSlotEntryWidgetInterface_SetSlotEntry_Params Parms{};

	Parms.SlotEntryObject = SlotEntryObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Class ToolbarRuntime.ToolbarSlotEntry_EmptySlot
// (None)

class UClass* UToolbarSlotEntry_EmptySlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToolbarSlotEntry_EmptySlot");

	return Clss;
}


// ToolbarSlotEntry_EmptySlot ToolbarRuntime.Default__ToolbarSlotEntry_EmptySlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UToolbarSlotEntry_EmptySlot* UToolbarSlotEntry_EmptySlot::GetDefaultObj()
{
	static class UToolbarSlotEntry_EmptySlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UToolbarSlotEntry_EmptySlot*>(UToolbarSlotEntry_EmptySlot::StaticClass()->DefaultObject);

	return Default;
}

}


