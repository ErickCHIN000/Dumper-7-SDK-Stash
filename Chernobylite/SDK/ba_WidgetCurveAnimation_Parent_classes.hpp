#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x312 (0x532 - 0x220)
// BlueprintGeneratedClass ba_WidgetCurveAnimation_Parent.ba_WidgetCurveAnimation_Parent_C
class Aba_WidgetCurveAnimation_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_Float_2E15EDE0427E1BBA0A99DB81806C9C79;   // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_2E15EDE0427E1BBA0A99DB81806C9C79; // 0x234(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_17A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline;                                          // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRuntimeFloatCurve                    OpacityCurve;                                      // 0x240(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    ScaleCurve;                                        // 0x2C8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    XOffsetCurve;                                      // 0x350(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    YOffsetCurve;                                      // 0x3D8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                    MaterialParameterCurve;                            // 0x460(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  MaterialParameter;                                 // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               TargetWidget;                                      // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZeroOpacity;                                       // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZeroXTransform;                                    // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZeroYTransform;                                    // 0x508(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ZeroScale;                                         // 0x50C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentInterpvalue;                                // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldRestoreAtEnd;                                // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              TargetMaterial;                                    // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaterialParemeterFloor;                            // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaterialParameterCeiling;                          // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasStopped;                                        // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SizeOFFset;                                        // 0x531(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_WidgetCurveAnimation_Parent_C* GetDefaultObj();

	void GetTime(float* Time);
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Start(class UWidget* Widget, class UMaterialInstanceDynamic* TargetMaterial, class FName MaterialParameter, float MaterialParemeterFloor, float MaterialParameterCeiling);
	void Stop();
	void ExecuteUbergraph_ba_WidgetCurveAnimation_Parent(int32 EntryPoint, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, class UWidget* K2Node_CustomEvent_Widget, class UMaterialInstanceDynamic* K2Node_CustomEvent_TargetMaterial, class FName K2Node_CustomEvent_MaterialParameter, float K2Node_CustomEvent_MaterialParemeterFloor, float K2Node_CustomEvent_MaterialParameterCeiling, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetCurveValue_OutY, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_OutY_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetCurveValue_OutY_2, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_GetCurveValue_OutY_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, float CallFunc_GetCurveValue_OutY_4, float CallFunc_MapRangeClamped_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_5, class UCustomGameInstance* CallFunc_GetCGGameInstanceParent_AsCustom_Game_Instance_1, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2);
};

}


