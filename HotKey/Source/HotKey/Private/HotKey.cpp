// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HotKey.h"

#define LOCTEXT_NAMESPACE "FHotKeyModule"
#include "Framework/Application/SlateApplication.h"

void FHotKeyModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	HKInputProcessor = MakeShareable(new FHKInputProcessor());
	FSlateApplication::Get().RegisterInputPreProcessor(HKInputProcessor);
}

void FHotKeyModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHotKeyModule, HotKey)