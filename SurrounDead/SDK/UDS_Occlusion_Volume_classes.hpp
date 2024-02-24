#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x2DC - 0x298)
// BlueprintGeneratedClass UDS_Occlusion_Volume.UDS_Occlusion_Volume_C
class AUDS_Occlusion_Volume_C : public AActor
{
public:
	class UBillboardComponent*                   Billboard;                                         // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EUDS_OcclusionShape               Collision_Shape;                                   // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Box_Extent;                                        // 0x2A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Sphere_Radius;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Affect_Occlusion_on_Ultra_Dynamic_Sky;             // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Affect_Occlusion_on_Ultra_Dynamic_Weather;         // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Block_Weather_Particles;                           // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3F25[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   Collision_Component;                               // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Capsule_Half_Height;                               // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUDS_Occlusion_Volume_C* GetDefaultObj();

	void Get_Occlusion_Result(bool Weather, bool* Occluded, bool Temp_bool_Variable, bool K2Node_Select_Default);
	void UserConstructionScript(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UBoxComponent* CallFunc_AddComponent_ReturnValue, class USphereComponent* CallFunc_AddComponent_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, enum class ECollisionChannel CallFunc_Get_Weather_Particle_Collision_Channel_Channel, const struct FTransform& Temp_struct_Variable_2, class UCapsuleComponent* CallFunc_AddComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetCapsuleRadius_Radius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast);
};

}


