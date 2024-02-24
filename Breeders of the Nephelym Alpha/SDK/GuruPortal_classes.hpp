#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C8 - 0x2B0)
// BlueprintGeneratedClass GuruPortal.GuruPortal_C
class AGuruPortal_C : public ASexyGuruPortal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PortalLight;                                       // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PortalMesh;                                        // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGuruPortal_C* GetDefaultObj();

	void OnActivate();
	void OnDeactivate();
	void Reset();
	void ExecuteUbergraph_GuruPortal(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue);
};

}


