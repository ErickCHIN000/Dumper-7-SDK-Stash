#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10D (0x36D - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_Bar.wid_Inventory_Bar_C
class UWid_Inventory_Bar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Texture;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SectionSize;                                       // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftTarget;                                        // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftCurrent;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightTarget;                                       // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightCurrent;                                      // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LeftInstant;                                       // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RightInstant;                                      // 0x285(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_960[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Inventory_HP_V2_C*                Owner;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BothAnimFinished;                                  // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_968[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BarTexture;                                        // 0x298(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Bars;                                              // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        BackTarget;                                        // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontTarget;                                       // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBackFrontAnims;                                 // 0x32C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         backFrontAnimPending;                              // 0x32D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_972[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rest;                                              // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_975[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              DynamicMaterial;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BackAnimation;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                FrontAnimation;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            XPUpdateEnded;                                     // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentSections;                                   // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitialised;                                     // 0x364(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseDifferentTextures;                              // 0x365(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_987[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Dupa;                                              // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsPsyche;                                         // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_Inventory_Bar_C* GetDefaultObj();

	void SetBarTextures(int32 Size, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, int32 Temp_int_Variable_1, class UTexture* Temp_object_Variable_6, class UTexture* Temp_object_Variable_7, class UTexture* Temp_object_Variable_8, class UTexture* Temp_object_Variable_9, class UTexture* Temp_object_Variable_10, class UTexture* Temp_object_Variable_11, int32 Temp_int_Variable_2, class UTexture* Temp_object_Variable_12, class UTexture* Temp_object_Variable_13, class UTexture* Temp_object_Variable_14, class UTexture* Temp_object_Variable_15, class UTexture* Temp_object_Variable_16, class UTexture* Temp_object_Variable_17, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetUIBarSegments_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 K2Node_Select_Default, class UTexture* K2Node_Select_Default_1, class UTexture* K2Node_Select_Default_2, class UTexture* K2Node_Select_Default_3);
	struct FSlateBrush Get_Texture_Brush_0();
	float GetCurrentScalar(class FName ParameterName, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
	void SetBackSection(float Value);
	void SetFrontSection(float Value);
	void SetRightSection(int32 Sections, bool Instant, float FloatVal, float MaxFloatVal, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, TArray<float>& Temp_float_Variable, TArray<float>& Temp_float_Variable_1, TArray<float>& Temp_float_Variable_2, TArray<float>& K2Node_MakeArray_Array, TArray<float>& K2Node_MakeArray_Array_1, TArray<float>& K2Node_MakeArray_Array_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetUIBarSegments_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, TArray<float>& K2Node_Select_Default, float CallFunc_Array_Get_Item, float K2Node_Select_Default_1);
	void SetLeftSection(int32 Sections, bool Instant, float FloatVal, float MaxFloatVal, int32 Temp_int_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Variable_1, TArray<float>& Temp_float_Variable_2, TArray<float>& Temp_float_Variable_3, TArray<float>& Temp_float_Variable_4, int32 Temp_int_Variable_2, TArray<float>& Temp_float_Variable_5, TArray<float>& Temp_float_Variable_6, TArray<float>& Temp_float_Variable_7, bool Temp_bool_Variable, TArray<float>& K2Node_MakeArray_Array, TArray<float>& K2Node_MakeArray_Array_1, TArray<float>& K2Node_MakeArray_Array_2, TArray<float>& K2Node_Select_Default, float CallFunc_Array_Get_Item, TArray<float>& K2Node_MakeArray_Array_3, TArray<float>& K2Node_MakeArray_Array_4, TArray<float>& K2Node_MakeArray_Array_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TArray<float>& K2Node_Select_Default_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_FClamp_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Init(int32 Sections);
	void Update(bool Instant);
	void Construct();
	void ResetBackAndFront();
	void ExecuteUbergraph_wid_Inventory_Bar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_Sections, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_Instant, bool Temp_bool_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float K2Node_Select_Default, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool Temp_bool_Variable_1, float K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetTime_Time, float CallFunc_GetTime_Time_1, float CallFunc_GetCurrentScalar_ReturnValue, float CallFunc_GetCurrentScalar_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void XPUpdateEnded__DelegateSignature();
};

}


