#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass wid_Geiger_Arrow.wid_Geiger_Arrow_C
class UWid_Geiger_Arrow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ShowAnim;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Arrow;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Cross;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_3;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img;                                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PickableItem_00_C*                 ClosestItem;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ScanCategory                 Index;                                             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReadyForInput;                                     // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FinishedAnimation;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ResourceTypChanged;                                // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_Geiger_Arrow_C* GetDefaultObj();

	void GetCurrentResourceType(enum class EScannableResourceType* NewParam, bool K2Node_SwitchEnum_CmpSuccess);
	void SetFoundItem(bool FoundItemOfClass, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
	int32 WrapResourceByteAround(int32 Value, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void SetItemImageByEnum(class UImage* TargetImage, enum class Enum_ScanCategory Enumerator, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateClosestItem(class ABP_PickableItem_00_C* Res);
	void SwitchResourceImage(enum class Enum_ScanCategory Index, bool Is_Resource, bool SkipAnimation);
	void PreConstruct(bool IsDesignTime);
	void ShowArrow();
	void ShowMenu();
	void ExecuteUbergraph_wid_Geiger_Arrow(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetTime_Time, float CallFunc_GetTime_Time_1, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_2, class ABP_PickableItem_00_C* K2Node_CustomEvent_Res, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetTime_Time_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, enum class Enum_ScanCategory K2Node_CustomEvent_Index, bool K2Node_CustomEvent_Is_Resource, bool K2Node_CustomEvent_SkipAnimation, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_Greater_ByteByte_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_WrapResourceByteAround_ReturnValue, int32 CallFunc_WrapResourceByteAround_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_Event_IsDesignTime, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5, const struct FTransform& CallFunc_MakeTransform_ReturnValue_6, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetTime_Time_3, bool Temp_bool_Variable_1, bool K2Node_Select_Default, class UClass* K2Node_Select_Default_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_5, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_4, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetTime_Time_4, float CallFunc_GetTime_Time_5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_6, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_6, float CallFunc_GetTime_Time_6, bool CallFunc_IsValid_ReturnValue_7);
	void ResourceTypChanged__DelegateSignature();
	void FinishedAnimation__DelegateSignature();
};

}


