#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C
// (None)

class UClass* UWBP_HUD_Structure_WaterContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_Structure_WaterContainer_C");

	return Clss;
}


// WBP_HUD_Structure_WaterContainer_C WBP_HUD_Structure_WaterContainer.Default__WBP_HUD_Structure_WaterContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_Structure_WaterContainer_C* UWBP_HUD_Structure_WaterContainer_C::GetDefaultObj()
{
	static class UWBP_HUD_Structure_WaterContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_Structure_WaterContainer_C*>(UWBP_HUD_Structure_WaterContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.OnCanBeWateredChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBeWatered                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::OnCanBeWateredChanged(bool CanBeWatered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "OnCanBeWateredChanged");

	Params::UWBP_HUD_Structure_WaterContainer_C_OnCanBeWateredChanged_Params Parms{};

	Parms.CanBeWatered = CanBeWatered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWaterableObserver>K2Node_DynamicCast_AsWaterable_Observer                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>K2Node_DynamicCast_AsResource_Container_Observable               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "RemoveBindings");

	Params::UWBP_HUD_Structure_WaterContainer_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWaterable_Observer = K2Node_DynamicCast_AsWaterable_Observer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsResource_Container_Observable = K2Node_DynamicCast_AsResource_Container_Observable;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.OnWaterLevelChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WaterLevel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::OnWaterLevelChanged(float WaterLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "OnWaterLevelChanged");

	Params::UWBP_HUD_Structure_WaterContainer_C_OnWaterLevelChanged_Params Parms{};

	Parms.WaterLevel = WaterLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.UpdateFuelPercentage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FuelPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::UpdateFuelPercentage(float FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "UpdateFuelPercentage");

	Params::UWBP_HUD_Structure_WaterContainer_C_UpdateFuelPercentage_Params Parms{};

	Parms.FuelPercent = FuelPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.RefreshWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LWaterRemainingFraction                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NameColor_Complete                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NameColor_NotComplete                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::RefreshWidget(double LWaterRemainingFraction, const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "RefreshWidget");

	Params::UWBP_HUD_Structure_WaterContainer_C_RefreshWidget_Params Parms{};

	Parms.LWaterRemainingFraction = LWaterRemainingFraction;
	Parms.NameColor_Complete = NameColor_Complete;
	Parms.NameColor_NotComplete = NameColor_NotComplete;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.UpdateStructure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     NewStructure                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ContainerAccess                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>K2Node_DynamicCast_AsResource_Container_Observable               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureResourceCollectionTypeCallFunc_GetResourceType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IWaterableObserver>K2Node_DynamicCast_AsWaterable_Observer                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWaterableObserver>K2Node_DynamicCast_AsWaterable_Observer_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeWatered_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>K2Node_DynamicCast_AsResource_Container_Observable_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxResourceLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>K2Node_DynamicCast_AsResource_Container_Observable_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>K2Node_DynamicCast_AsResource_Container_Observable_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResourceLevel_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerAccess>K2Node_DynamicCast_AsResource_Container_Access                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IResourceContainerObservable>CallFunc_GetResourceContainerObservable_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxWaterLevel_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::UpdateStructure(class UObject* NewStructure, class UObject* ContainerAccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable, bool K2Node_DynamicCast_bSuccess, enum class EStructureResourceCollectionType CallFunc_GetResourceType_ReturnValue, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TSubclassOf<class IInterface> Temp_class_Variable_1, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IWaterableObserver> K2Node_DynamicCast_AsWaterable_Observer_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CanBeWatered_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetMaxResourceLevel_ReturnValue, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IResourceContainerObservable> K2Node_DynamicCast_AsResource_Container_Observable_3, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_GetResourceLevel_ReturnValue, TScriptInterface<class IResourceContainerAccess> K2Node_DynamicCast_AsResource_Container_Access, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IResourceContainerObservable> CallFunc_GetResourceContainerObservable_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_FindFirstImplementor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_VariableSet_MaxWaterLevel_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "UpdateStructure");

	Params::UWBP_HUD_Structure_WaterContainer_C_UpdateStructure_Params Parms{};

	Parms.NewStructure = NewStructure;
	Parms.ContainerAccess = ContainerAccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Container_Observable = K2Node_DynamicCast_AsResource_Container_Observable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResourceType_ReturnValue = CallFunc_GetResourceType_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_DynamicCast_AsWaterable_Observer = K2Node_DynamicCast_AsWaterable_Observer;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWaterable_Observer_1 = K2Node_DynamicCast_AsWaterable_Observer_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CanBeWatered_ReturnValue = CallFunc_CanBeWatered_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsResource_Container_Observable_1 = K2Node_DynamicCast_AsResource_Container_Observable_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetMaxResourceLevel_ReturnValue = CallFunc_GetMaxResourceLevel_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Container_Observable_2 = K2Node_DynamicCast_AsResource_Container_Observable_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsResource_Container_Observable_3 = K2Node_DynamicCast_AsResource_Container_Observable_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetResourceLevel_ReturnValue = CallFunc_GetResourceLevel_ReturnValue;
	Parms.K2Node_DynamicCast_AsResource_Container_Access = K2Node_DynamicCast_AsResource_Container_Access;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetResourceContainerObservable_ReturnValue = CallFunc_GetResourceContainerObservable_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_FindFirstImplementor_ReturnValue_1 = CallFunc_FindFirstImplementor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_VariableSet_MaxWaterLevel_ImplicitCast = K2Node_VariableSet_MaxWaterLevel_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HUD_Structure_WaterContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HUD_Structure_WaterContainer.WBP_HUD_Structure_WaterContainer_C.ExecuteUbergraph_WBP_HUD_Structure_WaterContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_Structure_WaterContainer_C::ExecuteUbergraph_WBP_HUD_Structure_WaterContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_Structure_WaterContainer_C", "ExecuteUbergraph_WBP_HUD_Structure_WaterContainer");

	Params::UWBP_HUD_Structure_WaterContainer_C_ExecuteUbergraph_WBP_HUD_Structure_WaterContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


