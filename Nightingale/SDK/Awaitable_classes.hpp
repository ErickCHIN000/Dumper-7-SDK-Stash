#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Awaitable.AwaitableLibrary
class UAwaitableLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAwaitableLibrary* GetDefaultObj();

	bool StopAwaitingBP(TScriptInterface<class IAwaitable>& Awaitable, struct FDelegateHandleBPWrapper& Handle);
	void AwaitBPTimed(TScriptInterface<class IAwaitable>& Awaitable, FDelegateProperty_& OnReadyDelegate, float Timeout, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer);
	void AwaitBP(TScriptInterface<class IAwaitable>& Awaitable, FDelegateProperty_& OnReadyDelegate, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer);
	void AwaitAllBPTimed(TArray<TScriptInterface<class IAwaitable>>& Awaitables, FDelegateProperty_& OnReadyDelegate, float Timeout, TScriptInterface<class IAwaitable>* Awaitable, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer);
	void AwaitAllBP(TArray<TScriptInterface<class IAwaitable>>& Awaitables, FDelegateProperty_& OnReadyDelegate, TScriptInterface<class IAwaitable>* Awaitable, struct FDelegateHandleBPWrapper* Handle, class UObject* Outer);
};

// 0x128 (0x150 - 0x28)
// Class Awaitable.BasicAwaiter
class UBasicAwaiter : public UObject
{
public:
	uint8                                        Pad_60B[0x128];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBasicAwaiter* GetDefaultObj();

	void Reset();
	void Ready();
};

// 0x18 (0xB8 - 0xA0)
// Class Awaitable.DelayedRegistrationComponent
class UDelayedRegistrationComponent : public UActorComponent
{
public:
	uint8                                        Pad_61B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bClientShouldRegister;                             // 0xA8(0x1)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_61F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBasicAwaiter*                         DelayedRegistrationAwaiter;                        // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDelayedRegistrationComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Awaitable.Awaitable
class IAwaitable : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAwaitable* GetDefaultObj();

};

// 0x190 (0x2E0 - 0x150)
// Class Awaitable.MultiAwaiter
class UMultiAwaiter : public UBasicAwaiter
{
public:
	uint8                                        Pad_63B[0x190];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMultiAwaiter* GetDefaultObj();

};

}


