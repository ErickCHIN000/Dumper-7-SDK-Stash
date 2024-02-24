#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IT_ItemSnapCaptor.IT_ItemSnapCaptor_C
class IIT_ItemSnapCaptor_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIT_ItemSnapCaptor_C* GetDefaultObj();

	void InspectorGetPrimitiveComponent(class AActor* Actor, class UPrimitiveComponent** Comp);
	void GetItemInspectInfo(class FName ItemId, struct FS_ItemInspectInfo* Info, bool* Found);
	void GetLocalAttachmentByID(class FName ItemId, bool* Found, class FName* Socket, enum class EAttachmentType* Type, class UClass** Class);
	void SpawnSnapshotCaptor(class UJSI_Slot_C* ItemRef, class ABP_ItemInspector_C** InspectorRef);
	void UpdateSnapCustom(const struct FVector& Location, const struct FRotator& Rotation, double FOV, class UJSI_Slot_C* JigItem, bool* Result);
	void AddItemToQueue(class UJSI_Slot_C* Item, bool* Result);
	void UpdateAttachments(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, TArray<class FName>& Attachments, class UTextureRenderTarget** RenderTarget);
	void UpdateSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D* RenderT, class UTextureRenderTarget** RenderTarget);
	void GetSnap(class UJSI_Slot_C* ItemRef, class UTextureRenderTarget2D** Texture);
};

}


