#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional_Container.BP_Structure_Functional_Container_C
// (Actor)

class UClass* ABP_Structure_Functional_Container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_Container_C");

	return Clss;
}


// BP_Structure_Functional_Container_C BP_Structure_Functional_Container.Default__BP_Structure_Functional_Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_Container_C* ABP_Structure_Functional_Container_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_Container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_Container_C*>(ABP_Structure_Functional_Container_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_HasContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, bool CallFunc_HasContainerFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "GetContainerFromProvider");

	Params::ABP_Structure_Functional_Container_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.CallFunc_HasContainerFromHandle_ReturnValue = CallFunc_HasContainerFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Structure_Functional_Container_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "GetDefaultContainer");

	Params::ABP_Structure_Functional_Container_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.HasContainer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// bool                               CallFunc_HasContainerFromHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_C::HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "HasContainer");

	Params::ABP_Structure_Functional_Container_C_HasContainer_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_HasContainerFromHandle_ReturnValue = CallFunc_HasContainerFromHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.HasContainerFromHandle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetContainerHandle_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemContainerHandle        CallFunc_GetContainerHandle_ReturnValue                          (NoDestructor)
// bool                               CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Structure_Functional_Container_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> CallFunc_GetContainerHandle_self_CastInput, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "HasContainerFromHandle");

	Params::ABP_Structure_Functional_Container_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;
	Parms.CallFunc_GetContainerHandle_self_CastInput = CallFunc_GetContainerHandle_self_CastInput;
	Parms.CallFunc_GetContainerHandle_ReturnValue = CallFunc_GetContainerHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue = CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.OnRep_bIsContainerOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureFXActivationTimeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::OnRep_bIsContainerOpen(bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, enum class EStructureFXActivationTime Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EStructureFXActivationTime K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "OnRep_bIsContainerOpen");

	Params::ABP_Structure_Functional_Container_C_OnRep_bIsContainerOpen_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.GetInventoryContainerInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RequestingActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>ContainerInterface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "GetInventoryContainerInterface");

	Params::ABP_Structure_Functional_Container_C_GetInventoryContainerInterface_Params Parms{};

	Parms.RequestingActor = RequestingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (ContainerInterface != nullptr)
		*ContainerInterface = Parms.ContainerInterface;

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_Container_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.PopulateChest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     ItemRewards                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Structure_Functional_Container_C::PopulateChest(TArray<struct FInventoryEntry>& ItemRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "PopulateChest");

	Params::ABP_Structure_Functional_Container_C_PopulateChest_Params Parms{};

	Parms.ItemRewards = ItemRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.InitializeContainer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::InitializeContainer(class UObject* Structure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "InitializeContainer");

	Params::ABP_Structure_Functional_Container_C_InitializeContainer_Params Parms{};

	Parms.Structure = Structure;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.ServerOnly_OnContainerOpenStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsContainerOpen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::ServerOnly_OnContainerOpenStateChanged(bool bIsContainerOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "ServerOnly_OnContainerOpenStateChanged");

	Params::ABP_Structure_Functional_Container_C_ServerOnly_OnContainerOpenStateChanged_Params Parms{};

	Parms.bIsContainerOpen = bIsContainerOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.InitializePersistence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_WorldPersistenceLoadStateLoadState                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::InitializePersistence(enum class E_WorldPersistenceLoadState LoadState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "InitializePersistence");

	Params::ABP_Structure_Functional_Container_C_InitializePersistence_Params Parms{};

	Parms.LoadState = LoadState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Structure_Functional_Container.BP_Structure_Functional_Container_C.ExecuteUbergraph_BP_Structure_Functional_Container
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_WorldPersistenceLoadStateK2Node_CustomEvent_LoadState                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_Event_ItemRewards                                         (ConstParm, ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Structure                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemContainerData_IsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureItemContainerData* CallFunc_GetItemContainerData_OutItemContainerData               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsContainerOpen                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXGameModeBase*            CallFunc_GetNWXGameModeBase_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_Container_C::ExecuteUbergraph_BP_Structure_Functional_Container(int32 EntryPoint, enum class E_WorldPersistenceLoadState K2Node_CustomEvent_LoadState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FInventoryEntry>& K2Node_Event_ItemRewards, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UObject* K2Node_CustomEvent_Structure, bool CallFunc_GetItemContainerData_IsValid, class UStructureItemContainerData* CallFunc_GetItemContainerData_OutItemContainerData, bool K2Node_Event_bIsContainerOpen, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_Container_C", "ExecuteUbergraph_BP_Structure_Functional_Container");

	Params::ABP_Structure_Functional_Container_C_ExecuteUbergraph_BP_Structure_Functional_Container_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_LoadState = K2Node_CustomEvent_LoadState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ItemRewards = K2Node_Event_ItemRewards;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_Structure = K2Node_CustomEvent_Structure;
	Parms.CallFunc_GetItemContainerData_IsValid = CallFunc_GetItemContainerData_IsValid;
	Parms.CallFunc_GetItemContainerData_OutItemContainerData = CallFunc_GetItemContainerData_OutItemContainerData;
	Parms.K2Node_Event_bIsContainerOpen = K2Node_Event_bIsContainerOpen;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetNWXGameModeBase_ReturnValue = CallFunc_GetNWXGameModeBase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


